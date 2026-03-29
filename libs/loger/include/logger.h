#pragma once
#ifndef LOGGER_H
#define LOGGER_H
#include <ctime>
#include <cstdio>
#include <string>
#include <sstream>
#include <memory>
#include <fstream>
#include <thread>
#include <atomic>
#include <mutex>

namespace Logging {

    enum class LogLevel : uint8_t {
        DEBUG, 
        INFO, 
        WARN, 
        ERROR
    };

    class logger {
        private:
            logger();
            ~logger();
            std::ofstream _file_;
            LogLevel minimal_lvl;
            std::thread _worker_;       
            std::atomic<bool> status;
            std::mutex _mutex_;
        public:
            static logger& instance();
            void log(LogLevel lvl,std::string message);
            void SetLogLevel(LogLevel lvl);
            void SetLogFile(const std::string& filename);
    };

    #define LOG_DEBUG(msg) Logging::logger::instance().log(Logging::LogLevel::DEBUG, msg)
    #define LOG_INFO(msg) Logging::logger::instance().log(Logging::LogLevel::INFO, msg)
    #define LOg_WARN(msg) Logging::logger::instance().log(Logging::LogLevel::WARN, msg)
    #define LOG_ERROR(msg) Logging::logger::instance().log(Logging::LogLevel::ERROR, msg)

}; // namespace Logging
#endif