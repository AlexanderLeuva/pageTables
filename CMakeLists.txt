cmake_minimum_required(VERSION 3.24)
project(pageTables C)

set(CMAKE_C_STANDARD 11)

add_executable(pageTables main.c config.h mlpt.h mlpt.c)
