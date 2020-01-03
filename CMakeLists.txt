cmake_minimum_required (VERSION 3.15)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include(FetchContent)

project(AdventOfCode2019)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.8.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(day1)
add_subdirectory(day2)
