#include "carton.h"
#include <iostream>
#include <stdexcept>

Carton::Carton(float length, float width, float height)
{
    try
    {
        SetMeasurements(length, width, height);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
    
    m_length= length;
    m_width = width;
    m_height = height;
}

void Carton::PrintInfo()
{
    std::cout << "Length: " << Length() << std::endl;
    std::cout << "Width: " << Width() << std::endl;
    std::cout << "Height: " << Height() << std::endl;
}

void Carton::SetMeasurements(float length, float width, float height)
{
    if(length <= 0 || width <= 0 || height <= 0)
    {
        throw std::out_of_range("All measurements must be greater than zero");
    }

    SetHeight(height);
    SetWidth(width);
    SetLength(length);
}

float Carton::Volume() const
{
    return Length() * Width() * Height();
}