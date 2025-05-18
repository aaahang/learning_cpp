cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled1 main.cpp
        src/inherit.cpp
        src/character.cpp
        src/memery_class.cpp
        src/operator.cpp
        src/copy_constructor.cpp
        src/template.cpp
        src/array.cpp
        src/thread.cpp
        src/sort.cpp
        src/type_change.cpp
        src1/test1.cpp
)
#target_link_libraries(${PROJECT_NAME} libglfw3dll.a) #动态链接

