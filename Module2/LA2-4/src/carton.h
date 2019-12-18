#pragma once

#include <iostream>

class Carton
{
private:
    float m_length;    
    float m_width;
    float m_height;

public:
    // Static constants
    static constexpr float kMaxSize = 100.f;
    static constexpr float kMinLength = 6.f;
    static constexpr float kMinWidth = 3.f;
    static constexpr float kMinHeight = 0.25f;
    // Constructors
    Carton() : m_length(0.0f), m_width(0.0f), m_height(0.0f) {}
    Carton(float length, float width, float height);
    // Getters
    float Length() const { return m_length; }
    float Width() const { return m_width; }
    float Height() const { return m_height; }
    // Setters
    void SetLength(float length) { m_length = length; }
    void SetWidth(float width) { m_width = width; }
    void SetHeight(float height) { m_height = height; }
    void SetMeasurements(float length, float width, float height);
    // Methods
    void PrintInfo();
    float Volume() const;
    std::string WriteData(std::ostream& out) const;
    std::string WriteData(std::ostream& out, std::string deliminator) const;
};