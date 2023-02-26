cmake_minimum_required(VERSION 3.24)
project(fibonacci)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest-1.13.0)
