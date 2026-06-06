//
// tests.cpp
// Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
//

#include <stuff/adder.h>

#include <gtest/gtest.h>

namespace stuff
{
    TEST(Adder, AddSucceeds)
    {
        EXPECT_EQ(stuff::Adder::Add(2, 3), 5);
    }
}
