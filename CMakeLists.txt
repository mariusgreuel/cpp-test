#
# CMakeLists.txt - CMake demo project
# Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
#

cmake_minimum_required(VERSION 3.15)
project(demo VERSION 1.0)

option(ENABLE_TESTS "Enable unit tests" ON)

set (CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(src)

if(ENABLE_TESTS)
    add_subdirectory(tests)
endif()
