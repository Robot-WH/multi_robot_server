#pragma once
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>

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


class TicToc {
  public:
    TicToc() {
        tic();
    }

    void tic() {
        start = std::chrono::system_clock::now();
    }

    double toc() {
        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end - start;
        return elapsed_seconds.count() * 1000;
    }

    double toc(std::string str) {
        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end - start;
        double time = elapsed_seconds.count() * 1000;
        std::cout<< str << " time: " << time << " ms" <<std::endl;
        return time;
    }

  private:
    std::chrono::time_point<std::chrono::system_clock> start, end;
};
