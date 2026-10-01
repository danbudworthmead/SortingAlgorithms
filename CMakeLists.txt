cmake_minimum_required(VERSION 3.20)

project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Sorting algorithms library
file(GLOB SOURCES
        "SortingAlgorithms/*.cpp"
        "SortingAlgorithms/*.h"
)

add_library(SortingAlgorithms ${SOURCES})

target_include_directories(SortingAlgorithms
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/SortingAlgorithms
)

# Catch2
include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.8.1
)

FetchContent_MakeAvailable(Catch2)

# Tests
add_executable(SortingAlgorithmsTests
        Tests/Tests.cpp
)

target_include_directories(SortingAlgorithmsTests
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/SortingAlgorithms
)

target_link_libraries(SortingAlgorithmsTests
        PRIVATE
        SortingAlgorithms
        Catch2::Catch2WithMain
)

# CTest
include(CTest)
enable_testing()

add_test(
        NAME SortingAlgorithmsTests
        COMMAND SortingAlgorithmsTests
)
