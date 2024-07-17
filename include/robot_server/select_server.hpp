#pragma once
#include <mutex>
#include <shared_mutex>
#include "server_base.hpp"
#include "robot_server/multi_thread_pool.hpp"
namespace Comm {
class SelectServer : public ServerBase {
public:
  /**
   * @brief Construct a new Select Server object
   * 
   */
  SelectServer();
  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  bool Open() override ;

  /**
   * @brief 
   * 
   * @param robot_label 本次发送的机器人目标  (ip地址)
   * @param message_type 
   * @param data 序列化数据 
   */
  void TcpSend(const std::string& robot_label, const uint8_t& message_type, 
                            const std::string& data) override ;

  void TcpSend(const uint32_t& s_addr, const uint8_t& message_type, 
                                                      const std::string& msg) override;

protected:
  /**
   * @brief 
   * 
   */
  void connectThread();

  /**
   * @brief 
   * 
   */
  void readThread();

  /**
   * @brief 
   * 
   * @return int 
   */
  int connectClient();

  /**
   * @brief 
   * 
   * @param fd 
   */
  void clientComm(int fd);

  void udpComm();

  std::unordered_map<int, in_addr_t> fd_ip_map_;  // <ip, info>
private:
  fd_set client_fs_;
  int maxfd_;
  int udp_fd_; 
  std::mutex fs_mt_;
  std::shared_mutex map_mt_;
  MultipleThreadPool thread_pool_;
  std::unordered_map<int, bool> read_status_table_;  
};
}
