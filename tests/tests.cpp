//
// tests.cpp
// Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
//

#include <stuff/add.h>

#include <gtest/gtest.h>

TEST(Stuff, AddSucceeds)
{
    EXPECT_EQ(stuff::AddStuff(2, 3), 5);
}
