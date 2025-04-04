cmake_minimum_required(VERSION 3.10)

# Set project name and version
project(CS2Calculator VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(calc calculator.cpp test.cpp)