cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

project(dragonborn)

add_subdirectory(src)
add_executable(dragonborn main.cpp)
target_link_libraries(dragonborn dragonborn_lib)