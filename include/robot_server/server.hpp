#pragma once
#include "common.hpp"
#include <deque>
#include <unordered_map>
namespace Comm {
class Server {
public:
  Server();
  bool Open();
  void Send(const std::string& robot_label, const uint8_t& message_type, const std::string& data);
  std::string get_ip();
protected:
  void multiThreadConnectClient();
  void multiThreadComm(void* arg);
private:
  struct SockInfo {
    char ip_address[32];
    int fd = -1;
  };
  std::unordered_map<in_addr_t, SockInfo> client_info_;  // <ip, info>
  int fd_;
  struct sockaddr_in address_;
};
}
