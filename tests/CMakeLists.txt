cmake_minimum_required(VERSION 3.10)
project(tic-tac-toe-tests)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(game_test game_test.cpp)
target_link_libraries(game_test gtest gtest_main)