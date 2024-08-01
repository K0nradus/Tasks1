cmake_minimum_required(VERSION 3.27.8)
project(B11)

set(CMAKE_CXX_STANDARD 17)

add_executable(B11 main.cpp
        safeArray.cpp
        safeArray.h)
