#include <iostream>
#include "factor.h"

int main()
{
    FactorMod();
    FactorMod(5);
    FactorMod(5, 10);
    auto FactorCount = GetFactorMod(5, 10);
    std::cout << "Factor count printed from main: " << FactorCount << std::endl;

    return 0;
}