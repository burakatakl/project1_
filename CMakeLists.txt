cmake_minimum_required(VERSION 3.26)
project(project1_)

set(CMAKE_CXX_STANDARD 17)

add_executable(project1_ main.cpp
        project1.cpp
        InsertionSort.h
        HeapSort.h)
