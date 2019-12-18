#include <array>
#include <fstream>
#include <iostream>
#include <string>
#include "counter.h"

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  Counter c1, c2;
  std::cout << "\nCounter 1: " << c1.Count() << std::endl;
  std::cout << "\nCounter 2: " << c2.Count() << std::endl;
  c2 = ++c1;
  c2 = c1++;
  std::cout << "\nCounter 1: " << c2.Count() << std::endl;

  return 0;
}
