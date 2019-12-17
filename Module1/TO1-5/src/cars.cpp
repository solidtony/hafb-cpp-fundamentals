#include <iostream>
#include "cars.h"

int HorsePower() { return 150; }
// using namespace lamborghini;
int lamborghini::HorsePower() { return 543; }
// using namespace porsche;
int porsche::HorsePower() { return 443; }
