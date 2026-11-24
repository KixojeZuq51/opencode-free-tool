cmake_minimum_required(VERSION 3.16)
project(opencode-free-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(opencodefreetool
    src/main.cpp
    src/gen.cpp
    src/activate.cpp
    src/use.cpp
)

target_include_directories(opencodefreetool PRIVATE include)

if(WIN32)
    target_link_libraries(opencodefreetool PRIVATE userenv)
endif()
