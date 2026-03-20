#pragma once
#include <ctime>
#include <cstdio>
#include <string>
#include <sstream>
#include <memory>

namespace Logging {

    class logger {
        private:
            enum class LogLevel {
                DEBUG, 
                INFO, 
                WARN, 
                ERROR 
            };
        public:
            logger(/* args */);
            ~logger();
    };

}; // namespace Logging

