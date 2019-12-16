/**
 * @file mysquares.cpp
 * @author your name (you@domain.com)
 * @brief Print multiple numbers squared
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    unsigned int NumberOfRootsToCalculate = 0;
    std::cout << "Input the largest integer value to generate square root table: ";
    std::cin >> NumberOfRootsToCalculate;

    std::cout << "NUMBER    SQUARE ROOT" << std::endl;
    std::cout << "------    -----------" << std::endl;
    for (int count = 1; count <= NumberOfRootsToCalculate; ++count)
    {
        std::cout << std::setw(6) << count << std::setw(10)
            << std::fixed << std::setprecision(4) << sqrt(count) << std::endl;
    }

    return 0;
}