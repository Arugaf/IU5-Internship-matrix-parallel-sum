cmake_minimum_required(VERSION 3.27)

set(PROJECT_NAME matrix-parallel-sum)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(server)
add_subdirectory(client)
