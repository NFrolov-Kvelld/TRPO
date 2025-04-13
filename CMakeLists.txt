cmake_minimum_required(VERSION 3.10)
project(TRPO)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)

add_executable(TRPO src/game.cpp)
target_link_libraries(TRPO gtest gtest_main)

install(TARGETS TRPO DESTINATION bin)