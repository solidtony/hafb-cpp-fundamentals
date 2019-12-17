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