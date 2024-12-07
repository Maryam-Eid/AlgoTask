cmake_minimum_required(VERSION 3.26)
project(AalgoTask)

set(CMAKE_CXX_STANDARD 17)

add_executable(AalgoTask main.cpp
        HeapSort/HeapSort.h
        HeapSort/HeapSort.cpp
        "Kruskal's/kruskal.h"
        "Kruskal's/kruskal.cpp")
