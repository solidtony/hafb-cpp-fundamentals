#include <iostream>
#include "age.h"
using namespace std;

// Main function
int main() 
{
	int age = 13;
	cout << "Current age: " << age << endl; // Prints 95
	ByValueAgeIn5Years(age);
  	//ByReferenceAgeIn5Years(age);
  	cout << "In 5 years, your age is: " << ByValueAgeIn5Years(age) << endl;
  	if (age >= 18)
  	{
  	    cout << "Congratulations, you can vote! " << endl;
  	}
}