#pragma once
#include <netdb.h>
#include <ifaddrs.h>
#include <cstring>
#include <deque>
#include <unordered_map>
#include <string>
#include "common.hpp"
namespace Comm {
class ServerBase {
public:
  ServerBase() {};
  virtual bool Open() = 0;
  virtual void Send(const std::string& robot_label, const uint8_t& message_type, 
    const std::string& data) = 0;
  std::string get_ip() {
    char ip[32];
    inet_ntop(AF_INET, &address_.sin_addr.s_addr, ip, sizeof(ip));
    return std::string(ip);
  }
  uint32_t get_addr_n(const std::string& robot_label) {
    uint32_t s_addr;
    inet_pton(AF_INET, robot_label.c_str(), &s_addr);
    return s_addr;
  }
protected:
  std::unordered_map<in_addr_t, SockInfo> client_info_;  // <ip, info>
  int fd_;
  struct sockaddr_in address_;
};
}
