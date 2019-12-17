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

int Max(int num1, int num2)
{
  return num1 > num2 ? num1 : num2;
}

int Max(int num1, int num2, int num3)
{
  int max = Max(num1, num2);
  return Max(max, num3);
}

int Max(const std::array<int, 10>& nums)
{
  int max = nums[0];
  for(auto num : nums)
  {
    max = Max(max, num);
  }

  return max;
}

void ResetElementsToZero(std::array<int, 10>& nums)
{
  for(int num=0; num < nums.size(); ++num)
  {
    nums[num] = 0;
  }
}