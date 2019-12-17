#include "my_functions.h"

#include <iostream>

int Sum(int num1, int num2)
{
  return num1 + num2;
}

void PrintSum(int num1, int num2)
{
    std::cout << num1 << " + " << num2
    << " = " << Sum(num1, num2) << std::endl;
}

/**
 * @brief Increments the value of step by 1
 * 
 * @param step: current step value
 */

void UpdateStep(int& step)
{
  std::cout << "Current step: " << step << std::endl;
  step++;
  std::cout << "New step: " << step << std::endl;
}