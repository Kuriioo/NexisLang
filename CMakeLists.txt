cmake_minimum_required(VERSION 3.20)

project(Liquid)

set(SOURCES src/main.cpp src/Liquid/VM/VM.cpp)

add_executable(Liquid ${SOURCES})
target_include_directories(Liquid PRIVATE include)
