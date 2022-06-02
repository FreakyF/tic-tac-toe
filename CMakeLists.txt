cmake_minimum_required(VERSION 3.22)
project(tic_tac_toe C)

include_directories(include src)


set(CMAKE_C_STANDARD 11)

add_executable(tic_tac_toe src/main.c)
