cmake_minimum_required(VERSION 3.30)
project(square_rectangle)

set(CMAKE_CXX_STANDARD 20)

add_executable(square_rectangle main.cpp
        rectangle.cpp
        rectangle.h
        square.cpp
        square.h
        point.cpp
        point.h)
