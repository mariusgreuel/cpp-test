#
# CMakeLists.txt - CMake demo project
# Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
#

add_library(stuff
    "adder.cpp"
)

target_include_directories(stuff PUBLIC
    ../include
)

add_executable(demo
    demo.cpp
)

target_link_libraries(demo PRIVATE
    stuff
)
