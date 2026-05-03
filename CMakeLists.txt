cmake_minimum_required(VERSION 3.16)
project(Hitorya_WebServer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Release)

add_executable(webserver 
    config/config.hpp 
    config/platform.hpp 
    core/include/server.hpp
    core/src/server.cpp
    libs/loger/include/logger.h
    libs/loger/src/logger.cpp
)

target_compile_options(webserver PRIVATE -O3 -march=native -flto)