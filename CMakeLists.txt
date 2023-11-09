cmake_minimum_required(VERSION 3.20)

project(Kafe)

set(SOURCES src/main.cpp src/Kafe/VM/VM.cpp)

add_executable(Kafe ${SOURCES})
target_include_directories(Kafe PRIVATE include)
