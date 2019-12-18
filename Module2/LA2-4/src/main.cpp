#include <array>

#include <iostream>
#include "carton.h"

constexpr int kMaxBoxes = 10;

int main() {
  // create a Carton object using the default constructor
  std::array<Carton, kMaxBoxes> boxes;
  boxes[0].SetMeasurements(6, 6, 6);
  for (auto box : boxes)
  {
    box.PrintInfo();
  }
  // create a Carton object using the other constructor

  // create an array of Cartons

  // add some valid elements to the array

  // loop through the array

  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}