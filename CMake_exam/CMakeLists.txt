cmake_minimum_required(VERSION 2.6)
PROJECT(CMAKEEXAM)
set(CMAKE_CXX_STANDARD 14)

include_directories ("${PROJECT_SOURCE_DIR}/include")

add_executable(
    hellocmake
    ${PROJECT_SOURCE_DIR}/library/hello.cpp
    ${PROJECT_SOURCE_DIR}/library/add.cpp
    ${PROJECT_SOURCE_DIR}/src/demo.cpp
)