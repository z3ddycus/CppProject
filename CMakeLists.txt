cmake_minimum_required(VERSION 3.6)
project(Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Im.cpp src/Im.h src/OutIm.cpp src/OutIm.h)
add_executable(Project ${SOURCE_FILES})