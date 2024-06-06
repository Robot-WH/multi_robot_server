#pragma once
#include "server_base.hpp"
namespace Comm {
class SelectServer : public ServerBase {
public:
  SelectServer();
  bool Open() override ;
  void Send(const std::string& robot_label, const uint8_t& message_type, 
    const std::string& data) override ;
protected:
  void working();
  int connectClient();
  int clientComm(int fd);
  std::unordered_map<int, in_addr_t> fd_ip_map_;  // <ip, info>
};
}
