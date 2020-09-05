cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

project(dragonborn)

add_library(dragonborn_lib dragonborn.cpp
            dragonborn.h)