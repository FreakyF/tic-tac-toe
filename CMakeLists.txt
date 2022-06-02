cmake_minimum_required(VERSION 3.22)
project(tic_tac_toe C)
set(SDL2_PATH "")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${tic_tac_toe_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)

add_executable(tic_tac_toe src/main.c)

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(tic_tac_toe ${SDL2_LIBRARY})