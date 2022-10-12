cmake_minimum_required(VERSION 3.23)
project(lab03Smetaniuk)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab03Smetaniuk)

add_executable(lab03Smetaniuk
        lab03Smetaniuk/myFunctions.cpp
        lab03Smetaniuk/myFunctions.h
        lab03Smetaniuk/Source.cpp)
