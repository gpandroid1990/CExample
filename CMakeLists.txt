cmake_minimum_required(VERSION 3.29)
project(CExample C)

set(CMAKE_C_STANDARD 11)

add_executable(CExample main.c
        rock-paper-sclssors/play_game.c
        rock-paper-sclssors/play_game.h)
