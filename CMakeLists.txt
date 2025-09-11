cmake_minimum_required(VERSION 3.12)
project(cppcon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED)

add_executable(cppcon main.cpp)
target_link_libraries(cppcon PRIVATE Boost::headers)

# Testing
enable_testing()
add_test(NAME run COMMAND cppcon)