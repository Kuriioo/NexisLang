cmake_minimum_required(VERSION 3.20)

project(Nexis)

set(SOURCES 
    src/CLI/main.cpp
    src/Nexis/Nexis.cpp 
    src/Nexis/AST/Lexer.cpp
    src/Nexis/AST/Token.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

add_executable(Nexis ${SOURCES})
add_subdirectory(lib/clipp EXCLUDE_FROM_ALL)
target_link_libraries(Nexis PUBLIC clipp)
target_include_directories(Nexis PRIVATE include)
