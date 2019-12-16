#include <iostream>

constexpr float KILOGAMS_TO_POUNDS = 2.20462f;
constexpr float METERS_TO_INCHES = 39.3701f;

enum class EBMIRange
{
    Underweight,
    Healthy,
    Overweight,
    Obese
};

float CalculateBMIUsingMetric(float weight_kg, float height_m);
float CalculateBMIUsingImperial(float weight_lbs, float height_in);
void PrintBMIRangeMessage(EBMIRange BMIRange);
void PrintBMIRangeMessage(float BMIvalue);
EBMIRange GetBMIRange(float BMIvalue);

int main()
{
    // Calculates BMI: weight(kg)/[height(m)]^2
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
        BMI = CalculateBMIUsingMetric(Weight, Height);
        std::cout << "You're BMI in metric units is: " << BMI << std::endl;
        BMI = CalculateBMIUsingImperial(Weight/KILOGAMS_TO_POUNDS, Height/METERS_TO_INCHES);
        std::cout << "You're BMI in Imperial units is: " << BMI << std::endl;

        // Calculate and print BMI using Imperial
        PrintBMIRangeMessage(BMI);
    }
    else
    {
        std::cout << "Height cannot be less than or equal to zero\n";
    }

    return 0;
}

float CalculateBMIUsingMetric(float weight_kg, float height_m)
{
    float BMI = 0.0f;
    
    BMI = weight_kg/(height_m*height_m);

    return BMI;
}

float CalculateBMIUsingImperial(float weight_lbs, float height_in)
{
    const float BMI_COEFFICIENT = 703.0f;

    return CalculateBMIUsingMetric(weight_lbs/BMI_COEFFICIENT, height_in);
}

EBMIRange GetBMIRange(float BMIvalue)
{
    const float kUnderweightLimit = 18.5f;
    const float kHealthyLimit = 24.9f;
    const float kOverweightLimit = 29.9f;

    if(BMIvalue < kUnderweightLimit)
        return EBMIRange::Underweight;
    else if (BMIvalue < kHealthyLimit)
        return EBMIRange::Healthy;
    else if (BMIvalue < kOverweightLimit)
        return EBMIRange::Overweight;
    else
        return EBMIRange::Obese;
}

void PrintBMIRangeMessage(EBMIRange BMIRange)
{
    std::cout << "You're BMI range is: ";
    switch (BMIRange)
    {
        case EBMIRange::Underweight:
            std::cout << "Underweight\n";
            break;
        case EBMIRange::Healthy:
            std::cout << "Healthy\n";
            break;
        case EBMIRange::Overweight:
            std::cout << "Overweight\n";
            break;
        case EBMIRange::Obese:
            std::cout << "Obese\n";
            break;
        default:
            std::cout << "ERROR: Could not find range\n";
    }
    
    return;
}

void PrintBMIRangeMessage(float BMIvalue)
{
    EBMIRange BMIRange = GetBMIRange(BMIvalue);
    PrintBMIRangeMessage(BMIRange);
}