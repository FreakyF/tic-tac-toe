cmake_minimum_required(VERSION 3.22)
project(tic_tac_toe C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${tic_tac_toe_SOURCE_DIR}/cmake")

set(SDL2_PATH "${tic_tac_toe_SOURCE_DIR}")
set(SDL2_IMAGE_PATH "${tic_tac_toe_SOURCE_DIR}")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(
        ${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR})

add_executable(tic_tac_toe
        src/main.c
        src/window_management.c
        include/window_management.h)

target_link_libraries(tic_tac_toe
        ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARY})