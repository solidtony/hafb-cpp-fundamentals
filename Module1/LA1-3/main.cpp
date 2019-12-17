#include <array>
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

  std::array<int, 10> temps = {-12, 34, 67, 0, 12, 44, 99, -8, 18, 33};
  std::cout << "Max temp: " << Max(temps) << std::endl;
  ResetElementsToZero(temps);
  for (auto temp : temps)
  {
    std::cout << temp << std::endl;
  }

  return 0;
}