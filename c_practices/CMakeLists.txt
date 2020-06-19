cmake_minimum_required(VERSION 3.13)
project(c_practices C)

set(CMAKE_C_STANDARD 11)

add_executable(c_practices Domain_language/main.c Domain_language/a_recentage_interpreter.c)