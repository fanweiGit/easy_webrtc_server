#pragma once

#include <netinet/in.h>

#include <cstddef>
#include <cstdint>

class TransportInterface {
 public:
  virtual ~TransportInterface() {}
  virtual bool SendPacket(const uint8_t* data, size_t len,
                          const struct sockaddr_in& remote_address) = 0;
};
