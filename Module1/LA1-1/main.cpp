#include <iostream>

int main()
{
    // Get user's full name
    std::string FirstName = "";
    std::cout << "Please enter your first name: ";
    std::cin >> FirstName;

    // Print greeting
    std::cout << "Hello " << FirstName << std::endl;

    return 0;
}