#include "distance.h"

#include <cmath>
#include <iostream>

Distance::Distance(const Distance& dist)
{
    SetFeet(dist.Feet());
    SetInches(dist.Inches());
}

Distance::Distance(int feet, float inches)
{
    UpdateDistance(feet, inches);
}

void Distance::ShowDist() const
{
    std::cout << Feet() << "\' " << Inches() << "\"" << std::endl;
}

float Distance::ConvertInchesToFeet_(float inches) const
{
    return inches / NUMBER_OF_INCHES_IN_FEET;
}

float Distance::ConvertFeetDecimalToInches_(float feet) const
{
    return std::abs((feet - (int)feet)) * NUMBER_OF_INCHES_IN_FEET;
}

void Distance::UpdateDistance(int feet, float inches)
{
    float feet_f = ConvertInchesToFeet_(inches);
    feet_f += feet;
    SetFeet((int)(feet_f));
    inches = ConvertFeetDecimalToInches_(feet_f);
    SetInches(inches);
}

Distance Distance::operator + (const Distance& rhs) const
{
    int feet = this->Feet() + rhs.Feet();
    float inches = this->Inches() + rhs.Inches();

    return Distance(feet, inches);
}

Distance Distance::operator - (const Distance& rhs) const
{
    int feet = this->Feet() - rhs.Feet();
    float inches = this->Inches() - rhs.Inches();

    return Distance(feet, inches);
}

bool Distance::operator < (const Distance& rhs) const
{
    float feet_lhs = this->Inches() + ConvertInchesToFeet_(this->Inches());
    float feet_rhs = rhs.Inches() + ConvertInchesToFeet_(rhs.Inches());

    return feet_lhs < feet_rhs;
}

bool Distance::operator == (const Distance& rhs) const
{
    float feet_lhs = this->Inches() + ConvertInchesToFeet_(this->Inches());
    float feet_rhs = rhs.Inches() + ConvertInchesToFeet_(rhs.Inches());

    return feet_lhs == feet_rhs;
}

Distance Distance::operator = (const Distance& rhs)
{
    SetFeet(rhs.Feet());
    SetInches(rhs.Inches());

    return Distance(Feet(), Inches());
}