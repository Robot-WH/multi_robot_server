#include <thread>
#include <sys/time.h>
#include "robot_server/select_server.hpp"
#include "robot_server/ipc/DataDispatcher.hpp"
namespace Comm {

SelectServer::SelectServer() : thread_pool_(4) {
  std::cout << "创建基于select 多路IO复用的服务器------------------2" << "\n";
  FD_ZERO(&client_fs_);
  maxfd_ = 0;
}

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool SelectServer::Open() {
  // 创建通信的套接字
  // int fd：
  //     这是一个整数类型的变量，名为fd。在套接字编程中，fd（通常称为文件描述符）是一个非负整数，用于唯一标识一个套接字。所有的套接字操作，如发送、接收、关闭等，都会使用这个fd。
  // **socket()**：
  //     这是一个系统调用，用于创建一个新的套接字。
  // AF_INET：
  //     这是socket()函数的第一个参数，表示要创建的套接字的地址族。AF_INET表示使用IPv4地址族。
  // SOCK_STREAM：
  //     这是socket()函数的第二个参数，表示要创建的套接字的类型。SOCK_STREAM表示创建一个流套接字，它提供了一个面向连接的、可靠的、基于字节流的传输层服务。这种套接字类型通常用于TCP协议。
  // 0：
  //     这是socket()函数的第三个参数，通常被称为协议。在这个例子中，它被设置为0，这意味着系统将自动选择适当的协议。对于SOCK_STREAM和AF_INET的组合，这通常是TCP协议。
  fd_ = socket(AF_INET, SOCK_STREAM, 0);
  if (fd_ == -1) {
    perror("socker");
    return -1;
  }
  // 读取本地IP
  // ifaddrs是一个结构体，用于存储网络接口的地址信息。这个结构体包含了关于网络接口的各种信息，
  // 如接口名（ifa_name）、接口状态标志（ifa_flags）、IP地址（ifa_addr）、子网掩码（ifa_netmask）等。
  struct ifaddrs *ifAddrStruct = NULL;
  struct ifaddrs *ifa = NULL;
  void *tmpAddrPtr = NULL;
  // 获取所有网络接口的地址
  // 在getifaddrs函数中会构造一个ifaddrs的链表，ifAddrStruct为该链表的头指针
  if (getifaddrs(&ifAddrStruct) == -1) {
      perror("getifaddrs");
      return -1;
  }
  // 遍历接口列表
  for (ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
    if (ifa->ifa_addr->sa_family == AF_INET) { // 检查它是否是 IPv4 地址
      // 在这里，你可以选择你想要绑定的 IP 地址，并将其设置为服务器的 sin_addr
      // 例如：如果你想要绑定到 eth0 接口的 IP 地址，你可以检查 ifa->ifa_name 是否为 "eth0"
      // "wlp"表示无线网卡
      if (strncmp(ifa->ifa_name, "wlp", 3) == 0) {
          tmpAddrPtr = &((struct sockaddr_in *)ifa->ifa_addr)->sin_addr;
          char addressBuffer[INET_ADDRSTRLEN];
          inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
          // printf("%s IP Address %s\n", ifa->ifa_name, addressBuffer);
          inet_pton(AF_INET, addressBuffer, &address_.sin_addr);
      }
    }
  }
 if (ifAddrStruct != NULL) freeifaddrs(ifAddrStruct); // 释放内存
  // 绑定本地IP，port
  address_.sin_family = AF_INET;
  // address_.sin_addr.s_addr = INADDR_ANY; // 自动绑定实际IP
  address_.sin_port = htons(9999); // 端口号 9999 转换为网络字节序，并存储在 sin_port 字段中
  // 绑定套接字到地址和端口
  if (bind(fd_, (struct sockaddr *)&address_, sizeof(address_)) < 0) {
      perror("bind failed");
      return -1;
  }
  // 设置监听
  // 在 listen 函数中，128 是队列长度参数。这个参数指定了未完成连接请求的最大队列长度。
  // 当一个客户端尝试连接到服务器，但服务器还没有调用 accept 来接受这个连接时，
  // 这个连接请求就会被放入一个队列中等待。这个参数定义了队列中可以存放的最大连接请求数
  int res = listen(fd_, 128);
  if (res == -1) {
    perror("listen failed");
    return -1;
  }
  // 创建连接线程
  std::thread connect_thread(&SelectServer::connectThread, this);
  // 创建读线程
  std::thread read_thread(&SelectServer::readThread, this);
  connect_thread.detach();
  read_thread.detach();
  return 1;
}

void SelectServer::connectThread() {
  fd_set redset;
  FD_ZERO(&redset);
  FD_SET(fd_, &redset);   // 监听描述符置位
  while (1) {
    fd_set tmp = redset;
    // 如果tmp集合中的任何文件描述符变得可读（即有数据可以读取），select就会返回
    int ret = select(fd_ + 1, &tmp, NULL, NULL, NULL);
    // std::cout << "connect select" << "\n";
    // 检测监听描述符是否设为1
    if (FD_ISSET(fd_, &tmp)) {
      // 说明有连接请求
      int cfd = connectClient();
      // std::cout << "cfd: " << cfd << "\n";
      fs_mt_.lock();
      FD_SET(cfd, &client_fs_);   // 设置到文件描述符列表  这样下次就会检查它的接收状态
      maxfd_ = cfd > maxfd_ ? cfd : maxfd_;
      read_status_table_[cfd] = false;  
      fs_mt_.unlock();
    }
  }
}

void SelectServer::readThread() {
  while (1) {
    fs_mt_.lock();
    fd_set tmp = client_fs_;
    int maxfd = maxfd_;
    fs_mt_.unlock();
    struct timeval tv;
    // 设置超时时间为10ms
    tv.tv_sec = 0;    // 秒数部分
    tv.tv_usec = 10000; // 微秒部分，10毫秒等于10000微秒
    int ret = select(maxfd + 1, &tmp, NULL, NULL, &tv);
    if (ret <= 0) {
      continue;
    }
    // 检查通信的描述符
    for (int i = 0; i <= maxfd; ++i) {
      if (FD_ISSET(i, &tmp)) {
        fs_mt_.lock();
        if (!read_status_table_[i]) {
          // std::cout << "read i: " << i << "\n";
          read_status_table_[i] = 1;  
          fs_mt_.unlock();
          // 说明有客户端发送数据过来
          // 将读取任务交给线程池处理
          thread_pool_.submit(&SelectServer::clientComm, this, i);
        }
        fs_mt_.unlock();
      }
    }
    // std::this_thread::sleep_for(std::chrono::milliseconds(20));
  }
}

/**
 * @brief SelectServer::Send
 * @param message_type
 * @param robot_label
 * @param data
 */
void SelectServer::Send(const std::string& robot_label, const uint8_t& message_type, 
    const std::string& msg) {
  // 获取当前通信的机器人的文件描述符
  uint32_t s_addr;
  inet_pton(AF_INET, robot_label.c_str(), &s_addr);
  map_mt_.lock_shared();
  if (client_info_.find(s_addr) == client_info_.end()) {
      return;
  }
  const SockInfo& client_info = client_info_[s_addr];
  map_mt_.unlock_shared();
  // 防止粘包  
  // 首先发送消息的头信息
  MessageInfo msg_info;
  msg_info.message_type = message_type;
  msg_info.message_len = msg.size();
  // 发送长度信息
  send(client_info.fd, &msg_info, sizeof(msg_info), 0);
  // 发送主题消息
  send(client_info.fd, msg.data(), msg.size(), 0);
  return;
}

/**
 * @brief 
 * 
 * @return int 
 */
int SelectServer::connectClient() {
  struct sockaddr_in client_addr;
  int addrlen = sizeof(client_addr);
  // 连接后，client的ip地址等信息会记录在client_addr中
  int cfd = accept(fd_, (struct sockaddr *)&client_addr, (socklen_t*)&addrlen);
  if (cfd == -1) {
    perror("accept");
    return -1;
  }
  SockInfo info;
  info.fd = cfd;
  // 该连接对应的ip
  inet_ntop(AF_INET, &client_addr.sin_addr.s_addr, info.ip_address, sizeof(info.ip_address));
  {
    std::unique_lock<std::shared_mutex> lock(map_mt_);
    client_info_[client_addr.sin_addr.s_addr] = info;
    fd_ip_map_[cfd] = client_addr.sin_addr.s_addr;
  }
  ipc::DataDispatcher::GetInstance().Publish("ConnectMsg", info);
  return cfd; 
}

/**
 * @brief 
 * 
 * @param fd 
 */
void SelectServer::clientComm(int fd) {
  TicToc tt;
  ClientMsgPacket msg_packet;
  map_mt_.lock_shared();
  msg_packet.addr_n = fd_ip_map_[fd];
  map_mt_.unlock_shared();
  // tt.toc("lock ");
  // tt.tic();
  // 先接收序列化数据信息
  MessageInfo info;
  int len = recv(fd, &info, sizeof(info), 0);
  // tt.toc("recv ");
  // 读端关闭  len = 0
  if (len <= 0) {
    std::cout << " 断开连接 " << "\n";
    fs_mt_.lock();
    FD_CLR(fd, &client_fs_);
    fs_mt_.unlock();
    close(fd);
    {
      std::unique_lock<std::shared_mutex> lock(map_mt_);
      uint32_t s_addr = fd_ip_map_[fd];
      // 由于断开连接了，所以把这个客户端信息删除
      if (client_info_.find(s_addr) != client_info_.end()) {
        std::cout << "删除文件描述符，ip: " << client_info_[s_addr].ip_address << "\n";
        client_info_.erase(s_addr);
      } else {
        std::cout << "无法删除文件描述符，ip: " << client_info_[s_addr].ip_address << "\n";
      }
      fd_ip_map_.erase(fd);
    }
    ipc::DataDispatcher::GetInstance().Publish("DisconnectMsg", fd);
    fs_mt_.lock();
    read_status_table_[fd] = 0;  
    fs_mt_.unlock();
    return;
  }
  msg_packet.message_type = info.message_type;
  // 根据长度接收protobuf数据
  msg_packet.received_message.resize(info.message_len);
  // tt.tic();
  ssize_t bytes_received = 0;
  while (bytes_received < info.message_len) {
      ssize_t bytes = recv(fd, msg_packet.received_message.data() + bytes_received,
                                              info.message_len - bytes_received, 0);
      if (bytes <= 0) {
          // 处理错误或连接关闭的情况
          break;
      }
      bytes_received += bytes;
  }
  // tt.toc("data ");
  // tt.tic();
  // 读取到发送过来的数据received_message后，接着需要把它放入任务处理队列中异步处理
  ipc::DataDispatcher::GetInstance().Publish("ClientMsg", msg_packet);
  // tt.toc("publish ");
   tt.toc("clientComm ");
  fs_mt_.lock();
  read_status_table_[fd] = 0;  
  fs_mt_.unlock();
  return;
}
}
