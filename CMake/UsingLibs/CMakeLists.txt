cmake_minimum_required (VERSION 3.4)
project (UsingLibrary)

set(PROJECT_LINK_LIBS testDirectory.dll)
link_directories(./../SharedLib/build/Debug/)

include_directories(./../SharedLib/include)

add_executable(libBindingTest mainApp.cpp)
target_link_libraries(libBindingTest ${PROJECT_LINK_LIBS} )

