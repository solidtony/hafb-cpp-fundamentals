#include <iostream>

int main()
{
    // Calcualte BMI: weight(kg)/[height(m)]^2
    float Weight = 0.0f;
    float Height = 0.0f;
    float BMI = 0.0f;

    // Collect user input
    std::cout << "Please enter your weight in kilograms: ";
    std::cin >> Weight;
    std::cout << "Please enter you hight in meters: ";
    std::cin >> Height;

    // Calculate and print out user's bmi
    if (Height > 0.0f)
    {
        BMI = Weight/(Height*Height);
        std::cout << "You'r BMI is: " << BMI;
    }
    else
    {
        std::cout << "Height cannot be less than or equal to zero";
    }

    return 0;
}