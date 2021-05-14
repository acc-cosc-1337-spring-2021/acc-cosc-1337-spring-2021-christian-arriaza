//write includes statements
#include <iostream>
#include "loops.h"
#include "loops.cpp"

//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{

	char choice;
	int num;

	do
	{
		cout << "Enter number between 1 and 10 to calculate its factorial: ";
		cin >> num;

		while (num > 10 || num < 1);
		{
			cout << "Invalid number, try again: " << '\n';
			cin >> num;
		}

		cout << "The factorial of " << num << " is " << factorial(num) << "." << '\n';
		
		cout << "Enter 'c' or 'C' to continue: ";
		cin >> choice;

	} while (choice == 'c' || choice == 'C');

	return 0;
}