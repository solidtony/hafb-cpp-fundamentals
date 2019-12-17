#include <array>
#include <iostream>
#include <string>
#include <fstream>

struct FullName
{
  std::string First = "";
  std::string Last = "";
  int Age = 0;
};

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;
int main() {
  // create an ojbect of type ifstream
  std::ifstream in; // input file stream

  // open the file age.txt
  std::string fileLocation = "../age.txt";
  in.open(fileLocation);
  if(in.fail())
  {
    std::cout << "Unable to open file: " << fileLocation << std::endl;
    return 1;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1);

  int age_size = 0;
  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
  for(auto age : ages)
  {
    std::cout << age << std::endl;
  }


  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  fileLocation = "../name_age.txt";
  std::ifstream nameFile;
  nameFile.open(fileLocation);
  if (nameFile.fail())
  {
    std::cout << "Failed to load file." << std::endl;
    return 1;
  }

  std::array<std::string, kMaxSize> nameArray;
  std::array<FullName, kMaxSize> FullNameArray;
  nameArray.fill("");

  int nameSize = 0;
  while(nameSize < kMaxSize && nameFile >> FullNameArray[nameSize].Age)
  {
    nameFile.ignore();
    std::getline(nameFile, nameArray[nameSize]);
    FullNameArray[nameSize].Last = nameArray[nameSize].substr(0, nameArray[nameSize].find(","));
    FullNameArray[nameSize].First = nameArray[nameSize].substr(nameArray[nameSize].find(" "), nameArray[nameSize].find("\n"));
    nameSize++;
  }

  std::cout << "Names\n"; 
  for (auto name : nameArray)
  {
    std::cout << name << std::endl;
  }

  std::cout << "Full Names\n";
  for (auto name : FullNameArray)
  {
    std::cout << "First Name: " << name.First << std::endl;
    std::cout << "Last Name: " << name.Last << std::endl;
    std::cout << "Age: " << name.Age << std::endl;
    std::cout << "-------------" << std::endl;
  }

  nameFile.close();
  // nameSize < kMaxSize && nameFile >> nameArray[nameSize])


  // read one name, store it in the array, and print it


  // read the rest of the names in the file


  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt


  // reset age and name arrays


  // read all the values from the name_age.txt file


  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
