#include <array>

#include <iostream>
#include "carton.h"
#include "carton_fileio.h"

int main() {
  // create a Carton object using the default constructor
  std::array<Carton, kMaxArraySize> boxes;
  boxes[0].SetMeasurements(6, 6, 6);

  int numberOfRecords = ReadDataFormatFromFile("../carton_data.txt", boxes);

  int count = 0;
  while(count < numberOfRecords)
  {
    std::cout << "---------\nCarton: " << count + 1 << std::endl;
    boxes[count].PrintInfo();
    ++count;
  }

  WriteDataToFile("../carton_data.csv", boxes, numberOfRecords);
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