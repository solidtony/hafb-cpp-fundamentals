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

#include <iostream>

int main()
{
    char code;
    std::cout << "Enter the specification code: ";
    std::cin >> code;

    if(code == 'S')
    {
        std::cout << "The item is space exploration grade." << std::endl;
    }

    switch (code)
    {
    default:
        std::cout << "The item is not supported." << std::endl;
        break;
    case 's':
    case 'S':
        std::cout << "The item is space exploration grade.";
        break;
    case 'M':
        std::cout << "The item is military grade.";
        break;
    case 'C':
        std::cout << "The item is commercial grade.";
        break;
    }

    return 0;
}