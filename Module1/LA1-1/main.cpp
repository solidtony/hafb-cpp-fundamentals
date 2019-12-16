#include <iostream>
#include <limits>

int main()
{
    // Get user's full name
    std::string FirstName = "";
    std::cout << "Please enter your first name: ";
    std::cin >> FirstName;

    // Print greeting
    std::cout << "Hello " << FirstName << std::endl;

    // Print int information
    std::cout << "Inegers are: " << sizeof(int) << " bytes.\n";
    std::cout << "Min integer value: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max integer value: " << std::numeric_limits<int>::max() << "\n";

    return 0;
}