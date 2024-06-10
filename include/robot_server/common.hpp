#pragma once
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <string>

struct MessageInfo {
  uint8_t message_type;
  int32_t message_len;
};

struct ClientMsgPacket {
  uint32_t addr_n;     // Ip的网络字节序
  uint8_t message_type;    // 消息类型
  std::string received_message;
};

struct SockInfo {
  char ip_address[32];
  int fd = -1;
};
