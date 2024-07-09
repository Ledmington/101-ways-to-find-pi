cmake_minimum_required(VERSION 3.10)

project(101_ways_to_find_pi VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -Wpedantic -Wsign-conversion -Wfloat-conversion -Wfloat-equal -Werror")

add_executable(main src/main.cpp)
