// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << Feet() << "\' " << Inches() << "\"" << std::endl;
}

Distance::Distance(int feet, float inches)
{
    m_feet = feet;
    if (inches > NUMBER_OF_INCHES_IN_FEET)
    {
        
    }
}