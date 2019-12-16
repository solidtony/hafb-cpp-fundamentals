/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief Multiple IF-Statement and CASE
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iomanip>
#include <iostream>

int main()
{
    int LargestFirstMultiple = 0;
    int LargestSecondMultiple = 0;
    std::cout << "Input the largest integer values to generate multiplication table (greater than zero): ";
    std::cin >> LargestFirstMultiple;
    std::cin >> LargestSecondMultiple;

    for (int Number1 = 1; Number1 <= LargestFirstMultiple; ++Number1)
    {
        for (int Number2 = 1; Number2 <= LargestSecondMultiple; ++Number2)
        {
            std::cout << std::setw(4) << Number1*Number2;
        }
        std::cout << std::endl;
    }
}
