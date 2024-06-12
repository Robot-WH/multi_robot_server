#pragma once
#include <mutex>
#include <shared_mutex>
#include "server_base.hpp"
#include "robot_server/multi_thread_pool.hpp"
namespace Comm {
class SelectServer : public ServerBase {
public:
  SelectServer();
  bool Open() override ;
  void Send(const std::string& robot_label, const uint8_t& message_type, 
    const std::string& data) override ;
protected:
  void connectThread();
  void readThread();
  int connectClient();
  void clientComm(int fd);
  std::unordered_map<int, in_addr_t> fd_ip_map_;  // <ip, info>
private:
  fd_set client_fs_;
  int maxfd_;
  std::mutex fs_mt_;
  std::mutex read_mt_;
  std::shared_mutex map_mt_;
  MultipleThreadPool thread_pool_;
};
}
