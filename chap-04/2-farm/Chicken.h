#pragma once

#include <iostream>

class Chicken : public Animal
{
public:
    void sing(char separator) const override { std::cout << "Cotcotcotcodet" << separator; }
};
