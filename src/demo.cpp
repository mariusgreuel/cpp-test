//
// demo.cpp
// Copyright (c) 2025 Robert Bosch GmbH. All rights reserved.
//

#include <stuff/adder.h>

#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::cout << "2 + 3 = " << stuff::Adder::Add(2, 3) << std::endl;

    return 0;
}
