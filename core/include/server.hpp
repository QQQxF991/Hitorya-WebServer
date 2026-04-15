#ifndef SERVER_HPP
#define SERVER_HPP

#include <atomic>
#include <memory>
#include <vector>

namespace server {

    class Server {
    private:
        std::atomic<bool> working_status = {false};
    public:
        Server();
        ~Server();
    };

};

#endif // SERVER_HPP