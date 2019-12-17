#include <iostream>
#include "my_functions.h"

// Main Function
int main()
{
  int number1 = 5;
  int number2 = 10;
  PrintSum(number1, number2);
  UpdateStep(number1);
  std::cout << number1;
  return 0;
}