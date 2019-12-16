/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Global vs Local
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>

constexpr int global_variable = 1000;

int main()
{
    int global_variable = 2000;
    // :: scope operator
    std::cout << "Global: " << ::global_variable << std::endl;
    std::cout << "Local: " << global_variable << std::endl;

    return 0;
}
