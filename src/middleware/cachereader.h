// Standard Includes
#include <thread>
// #include <winsock2.h>

class SocketHandler {
    private:
        // sockaddr_in sock;
        // SOCKET conn = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

        SocketHandler() {
            // sock.sin_family = AF_INET;
            // sock.sin_addr.s_addr = inet_addr("127.0.0.1");
            // sock.sin_port = 50000;

            // bind(conn, (sockaddr*) &sock, sizeof(sock));
        }
        ~SocketHandler() {}
        SocketHandler(SocketHandler&)  = delete;
        SocketHandler(SocketHandler&&) = delete;
        void operator=(SocketHandler&) = delete;
        void operator=(SocketHandler&&) = delete;

    public:
        static SocketHandler& getInstance() {
            static SocketHandler socket;
            return socket;
        }
           char* readSocket();

};