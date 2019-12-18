#include "height.h"

#include <iostream>

void print_feet(Height height)
{
    std::cout << "Height in feet: " << height.m_inches/12 << std::endl;
}