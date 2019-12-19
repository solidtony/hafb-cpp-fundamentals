#include "distance.h"

#include <cmath>
#include <iostream>

Distance::Distance(int feet, float inches)
{
    UpdateDistance(feet, inches);
}

void Distance::ShowDist() const
{
    std::cout << Feet() << "\' " << Inches() << "\"" << std::endl;
}

int Distance::ConvertInchesToFeet(float& out_inches)
{
    float inches = std::abs(out_inches);
    int feet = inches / NUMBER_OF_INCHES_IN_FEET;
    inches -= feet * NUMBER_OF_INCHES_IN_FEET;

    float sign = out_inches / std::abs(out_inches);
    if (std::isnan(sign)) return 0;

    feet = sign*feet;
    out_inches = sign*inches;

    return feet;
}

void Distance::UpdateDistance(int feet, float inches)
{
    feet += ConvertInchesToFeet(inches);
    SetFeet(feet);
    SetInches(inches);
}

Distance Distance::operator + (Distance rhs) const
{
    int feet = this->Feet() + rhs.Feet();
    float inches = this->Inches() + rhs.Inches();

    return Distance(feet, inches);
}

Distance Distance::operator - (Distance rhs) const
{
    int feet = this->Feet() - rhs.Feet();
    float inches = this->Inches() - rhs.Inches();

    return Distance(feet, inches);
}