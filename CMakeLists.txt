cmake_minimum_required(VERSION 3.29)
project(CExample C)

set(CMAKE_C_STANDARD 11)

add_executable(CExample main.c
        day1/day1.c
        day1/day1.h
        test/test.c
        test/test.h)
