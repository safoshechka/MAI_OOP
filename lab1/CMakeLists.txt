cmake_minimum_required(VERSION 3.20)
project(lab1)

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)

add_executable(lab1
        main.cpp
        figure.h
        point.cpp
        point.h
        octagon.cpp
        octagon.h
        hexagon.cpp
        hexagon.h
        pentagon.cpp
        pentagon.h lab2/hgf.cpp)