// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

Distance::Distance(int feet, float inches)
{
    SetDistance(feet, inches);
}

void Distance::ShowDist() const
{
    std::cout << Feet() << "\' " << Inches() << "\"" << std::endl;
}

// int Distance::CorrectInches(float& out_inches)
// {
//     int feet = 0;
//     while(out_inches >= NUMBER_OF_INCHES_IN_FEET)
//     {
//         out_inches -= NUMBER_OF_INCHES_IN_FEET;
//         feet++;
//     }
//
//     return feet;
// }

int Distance::CorrectInches(float& out_inches)
{
    int feet = out_inches / NUMBER_OF_INCHES_IN_FEET;
    out_inches -= feet * NUMBER_OF_INCHES_IN_FEET;

    return feet;
}

void Distance::SetDistance(int feet, float inches)
{
    feet += CorrectInches(inches);
    SetFeet(feet);
    SetInches(inches);
}

Distance Distance::operator + (Distance rhs) const
{
    int feet = this->Feet() + rhs.Feet();
    float inches = this->Inches() + rhs.Inches();

    return Distance(feet, inches);
}
