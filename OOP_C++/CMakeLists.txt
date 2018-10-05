cmake_minimum_required(VERSION 3.12)
project(SOLID)

set(CMAKE_CXX_STANDARD 14)

add_executable(SOLID main.cpp Copy.h ConsoleIO.h AbstractIO.h FileIO.h FactoryIO.h)