cmake_minimum_required(VERSION 2.8.0)
project(tanuki)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(AFTER "../tanuki/include")
file(GLOB TANUKI_SOURCES "../tanuki/src/*.cpp")
add_executable(tanuki ${TANUKI_SOURCES})
