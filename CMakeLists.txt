project(lab2)
cmake_minimum_required(VERSION 3.2)
add_executable(lab2 lab2.cpp FazzyNumber.cpp FazzyNumber.hpp)
set_property(TARGET lab2 PROPERTY CXX_STANDARD 11)