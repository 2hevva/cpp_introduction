cmake_minimum_required(VERSION 3.28)
project(cpp_introduction)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g ")

add_executable(cpp_introduction
        phase1/1.1cpp_print_hello_world_and_comment.cpp
        phase1/1.2variable.cpp
        phase1/1.3constant.cpp
        cppxxxasybt.cpp
)
