cmake_minimum_required(VERSION 3.20)
project(CppStudy)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/inc)

# Add subdirectories for each chapter
add_subdirectory(src/chapter1)
add_subdirectory(src/chapter2)