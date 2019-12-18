#pragma once

class Height
{
private:
    float m_inches;

public:
    // Constructors/Destructors
    Height() : m_inches(0.f) {}
    Height(float inches) : m_inches(inches) {}
    ~Height() {}

    // Getters/Setters
    float Inches() const { return m_inches; }
    void SetInches(float heightInches);

    // Methods
    friend void print_feet(Height h1);
};