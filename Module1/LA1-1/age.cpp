/**
 * @file age.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    // Task display rights by age:
    // 1) If you are under 18, you must go to school
    if (age < 18)
        std::cout << "You should be in school\n";
    // 2) If you are over 18, you can vote
    else if (age < 21)
        std::cout << "You can vote\n";
    // 3) If you are over 19, you can buy cigs
    else if (age < 19)
        std::cout << "You can smoke\n";
    // 4) If you are over 21, you can drink
    else if (age < 21)
        std::cout << "Drink up\n";
    // 5) If you are over 55, you get discounts
    else if (age < 55)
        std::cout << "Discounts for you!\n";
    // 6) If you are over 65, you can retire
    else
        std::cout << "Retirement is in you're near future.\n";
}