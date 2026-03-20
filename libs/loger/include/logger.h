#pragma once
#include <ctime>
#include <cstdio>
#include <string>
#include <sstream>
#include <memory>
#include <fstream>
#include <thread>
#include <atomic>

namespace Logging {

    class logger {
        private:
            enum class LogLevel : uint8_t {
                DEBUG, 
                INFO, 
                WARN, 
                ERROR
            };

            logger();
            ~logger();
            std::ofstream _file_;
            LogLevel minimal_lvl;
            std::thread _worker_;       
            std::atomic<bool> status;

        public:
            static logger& instance();

    };

}; // namespace Logging

