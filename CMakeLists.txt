cmake_minimum_required(VERSION 3.10)
project(gmock_template)

set(CMAKE_CXX_STANDARD 14)

set(lib "lib")
set(lib_test "lib_test")

add_subdirectory(external)
add_subdirectory(lib)
add_subdirectory(test)

