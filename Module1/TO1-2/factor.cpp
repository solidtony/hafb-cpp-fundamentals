#include "factor.h"
#include <iostream>

/**
* @brief Calculate the number of instances
*/
unsigned int GetFactorMod(int mod_number, int max_range)
{
    unsigned int count = 0;
    for (unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
            ++count;
        }
    }
    std::cout << "Number of factors mod "<< mod_number << ": " << count << std::endl;

    return count;
}

/**
* @brief Calculate the number of instances
*/
void FactorMod()
{
    FactorMod(3);
}

void FactorMod(int mod_number)
{
    FactorMod(mod_number, 30);
}

void FactorMod(int mod_number,  int max_range)
{
    GetFactorMod(mod_number, max_range);
}