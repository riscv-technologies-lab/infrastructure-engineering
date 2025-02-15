cmake_minimum_required(VERSION 3.28.0  FATAL_ERROR)

project(ap CXX)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(SOURCES
    src/ap.cpp
)

target_include_directories(ap PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_executable(ap main.cpp)
