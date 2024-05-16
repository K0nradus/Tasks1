cmake_minimum_required(VERSION 3.28)
project(Blatt7 C)

set(CMAKE_C_STANDARD 17)

add_executable(Blatt7 main.c
        A2.c)
target_link_libraries(Blatt7 m)