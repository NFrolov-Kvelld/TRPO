cmake_minimum_required(VERSION 3.10)
project(tic-tac-toe)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)

add_executable(tic-tac-toe src/game.cpp)
target_link_libraries(tic-tac-toe gtest gtest_main)

install(TARGETS tic-tac-toe DESTINATION bin)