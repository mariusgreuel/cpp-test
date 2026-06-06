#
# CMakeLists.txt - CMake demo project
# Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
#

find_package(GTest REQUIRED)

add_executable(stuff_tests
    "adder_tests.cpp"
)

target_link_libraries(stuff_tests PRIVATE
    GTest::gtest_main
    stuff
)

add_test(all stuff_tests)
