cmake_minimum_required(VERSION 3.12)
project(RPNCalculator)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(RPNCalculator main.cpp operation.hpp abstract_operation.hpp addition_operation.hpp subtraction_operation.hpp multiplication_operation.hpp division_operation.hpp)