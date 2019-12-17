#include "age.h"

int ByValueAgeIn5Years(int age)
{
    return age + 5;
}

void ByReferenceAgeIn5Years(int& age)
{
    age += 5;
}

int CurrentAge(int age)
{
    return age;
}