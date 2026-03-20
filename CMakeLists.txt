cmake_minimum_required(VERSION 3.16)
project(Hitorya_WebServer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Release)

add_executable(webserver


)

target_compile_options(webserver PRIVATE -O3 -march=native -flto)