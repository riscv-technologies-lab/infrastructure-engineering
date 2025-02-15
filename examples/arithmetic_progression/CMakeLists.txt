cmake_minimum_required(VERSION 3.10)
project(ArithmeticProgression)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(arithmetic_progression src/arithmetic_progression.cpp)
target_include_directories(arithmetic_progression PUBLIC include)

enable_testing()
find_package(GTest REQUIRED)
add_executable(tests tests/test_arithmetic_progression.cpp)
target_link_libraries(tests PRIVATE arithmetic_progression GTest::GTest GTest::Main)
add_test(NAME ArithmeticProgressionTest COMMAND tests)

