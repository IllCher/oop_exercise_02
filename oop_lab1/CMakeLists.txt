project(lab1)
cmake_minimum_required(VERSION 3.2)
add_executable(lab1 lab1.cpp FazzyNumber.cpp FazzyNumber.hpp cmake-build-debug/test_00.txt cmake-build-debug/test_01.txt cmake-build-debug/test_02.txt cmake-build-debug/test_03.txt cmake-build-debug/test_04.txt)
set_property(TARGET lab1 PROPERTY CXX_STANDARD 11)