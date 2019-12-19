#pragma once

class Distance
{
private:
    static constexpr int NUMBER_OF_INCHES_IN_FEET = 12;
    /* data */
    int m_feet;
    float m_inches;

public:
    Distance() : m_feet(0), m_inches(0.f) {}
    Distance(int feet, float inches);
    ~Distance() {}

    // Getter/Setters
    auto Feet() const {return m_feet;}
    auto Inches() const {return m_inches;}
    void SetFeet(int feet) {m_feet = feet;}
    void SetInches(float inches) {m_inches = inches;}
    void ShowDist() const;
    void UpdateDistance(int feet, float inches);
    int ConvertInchesToFeet(float& inches);
    Distance operator + (Distance distance2) const;
    Distance operator - (Distance rhs) const;
};
