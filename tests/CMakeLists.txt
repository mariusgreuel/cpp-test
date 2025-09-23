#
# CMakeLists.txt - CMake demo project
# Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
#

find_package(GTest REQUIRED)

add_executable(test_stuff
    tests.cpp
)

target_link_libraries(test_stuff PRIVATE
    GTest::gtest_main
    stuff
)

add_test(all test_stuff)
