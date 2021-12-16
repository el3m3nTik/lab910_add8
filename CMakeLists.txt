cmake_minimum_required(VERSION 3.20)
project(lab910_add8)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab910_add8
        main.cpp
        square.cpp
        square.h)
