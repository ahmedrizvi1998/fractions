cmake_minimum_required(VERSION 3.12)
project(Fractions)

set(CMAKE_CXX_STANDARD 11)

add_executable(Fractions src/main.cc include/fractions.h src/fraction.cc)
include_directories(include/)