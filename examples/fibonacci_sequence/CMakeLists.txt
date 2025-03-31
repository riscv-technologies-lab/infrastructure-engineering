cmake_minimum_required(VERSION 3.10)
project(FibonacciSequence)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(arithmetic_progression REQUIRED)

add_library(fibonacci_sequence src/fibonacci_sequence.cpp)
target_include_directories(fibonacci_sequence PUBLIC include)
target_link_libraries(fibonacci_sequence PRIVATE arithmetic_progression::arithmetic_progression)

enable_testing()
find_package(GTest REQUIRED)
add_executable(tests tests/test_fibonacci_sequence.cpp)
target_link_libraries(tests PRIVATE fibonacci_sequence GTest::GTest GTest::Main)
add_test(NAME FibonacciSequenceTest COMMAND tests)

