cmake_minimum_required(VERSION 3.24)
project(FRACT)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(FRACT main.cpp)
target_link_libraries(FRACT sfml-graphics sfml-audio)