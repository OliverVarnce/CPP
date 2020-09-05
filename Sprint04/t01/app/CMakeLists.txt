cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

project(imperialVsStormcloak)

add_subdirectory(src)
add_executable(imperialVsStormcloak main.cpp)
target_link_libraries(imperialVsStormcloak soldier_lib)