cmake_minimum_required(VERSION 3.10.0)

project(cpp_tests)

add_subdirectory(lib)
include_directories(lib/include)

add_executable(mytests test.cpp)

target_link_libraries(mytests PRIVATE gtest gtest_main)