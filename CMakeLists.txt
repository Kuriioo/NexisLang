cmake_minimum_required(VERSION 3.20)

project(Kafe)

set(SOURCES 
    src/CLI/main.cpp
    src/CLI/Repl.cpp
    src/Kafe/Kafe.cpp 
    src/Kafe/VM/VM.cpp
    src/Kafe/VM/Value.cpp
    src/Kafe/Compiler/Compiler.cpp
    src/Kafe/Compiler/Lexer.cpp
    src/Kafe/Compiler/Token.cpp)

add_executable(Kafe ${SOURCES})
add_subdirectory(lib/clipp EXCLUDE_FROM_ALL)
target_link_libraries(Kafe PUBLIC clipp)
target_include_directories(Kafe PRIVATE include)