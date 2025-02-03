#include "cachereader.h"

char* SocketHandler::readSocket() {
    char buff[256];
    recv(this->conn, buff, 256, 0);
    return buff;
}