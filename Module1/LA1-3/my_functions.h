#pragma once

#include <array>

// prototype
int Sum(int num1, int num2);
void PrintSum(int num1, int num2);
void UpdateStep(int& step);
int Max(int num1, int num2);
int Max(int num1, int num2, int num3);
int Max(const std::array<int, 10>& nums);

void ResetElementsToZero(std::array<int, 10>& nums);