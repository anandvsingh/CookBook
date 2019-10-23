cmake_minimum_required (VERSION 3.4)
project (GtestUsage)

include_directories(./../Gtest/googletest/googletest/include)

file (GLOB LINK_LIBS  "D:/Learning/C++/Gtest/googletest/build/lib/Debug/*.lib")

add_executable (GTest1 test1.cpp)
target_link_libraries(GTest1 ${LINK_LIBS})