cmake_minimum_required(VERSION 3.20)
project(CppStudy)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/inc)

# Chapter 1
file(GLOB CHAPTER1_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/chapter1/*.cpp)
add_executable(Chapter1 ${CHAPTER1_SOURCES})

# Chapter 2
file(GLOB CHAPTER2_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/chapter2/*.cpp)
add_executable(Chapter2 ${CHAPTER2_SOURCES})