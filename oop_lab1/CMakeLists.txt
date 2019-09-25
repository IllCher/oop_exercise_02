project(lab1)
cmake_minimum_required(VERSION 3.2)
add_executable(lab1 lab1.cpp FazzyNumber.cpp FazzyNumber.hpp)
set_property(TARGET lab1 PROPERTY CXX_STANDARD 11)