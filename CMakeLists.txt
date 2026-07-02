cmake_minimum_required(VERSION 4.2)
project(programming-assignment-3-cs480)

set(CMAKE_CXX_STANDARD 20)

add_executable(programming-assignment-3-cs480 main.cpp
        diskAlgorithms.h
        fcfs.cpp
        sstf.cpp
        scan.cpp)