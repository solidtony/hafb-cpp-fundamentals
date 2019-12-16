#include <iostream>

constexpr int kMaxNum = 5;

int main()
{
    int grades[kMaxNum] = {0};

    std::cout << "Enter you exam grades: " << std::endl;
    float Sum = 0.0f;
    float Average = 0.0f;
    int GradesCount = 0;
    for( auto grade : grades)
    {
        std::cout << "Enter grade: " << std::endl;
        std::cin >> grade;
        Sum += grade;
        ++GradesCount;
    }
    Average = Sum/GradesCount;

    std::cout << "Your avg is: " << Average << std::endl;

    return 0;
}