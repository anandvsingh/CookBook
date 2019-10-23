cmake_minimum_required(VERSION 3.4)
project(directory_test)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(testDirectory STATIC ${SOURCES})

install(TARGETS testDirectory DESTINATION ./lib)