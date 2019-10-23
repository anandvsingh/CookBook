cmake_minimum_required(VERSION 3.4)
project(directory_test)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(testDirectory ${SOURCES})