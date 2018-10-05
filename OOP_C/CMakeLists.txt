cmake_minimum_required(VERSION 3.12)
project(SOLID_C C)

set(CMAKE_C_STANDARD 99)

add_executable(SOLID_C main.c IO.h IO.c consoleprinter.c fileprinter.c copy.h printerfactory.h)