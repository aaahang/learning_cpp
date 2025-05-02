cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/head_file)


add_executable(untitled1 main.cpp
        src/inherit.cpp
)
