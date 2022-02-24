cmake_minimum_required(VERSION 3.10.0)

add_subdirectory(googletest)
include_directories(googletest/include)

add_executable(mytests test.cpp)

target_link_libraries(mytests PRIVATE gtest gtest_main)