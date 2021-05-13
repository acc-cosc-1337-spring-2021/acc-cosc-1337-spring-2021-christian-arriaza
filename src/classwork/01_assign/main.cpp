//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;

	int result = multiply_numbers(num);
	cout << "Your Result: " << result << '\n';

	int num1 = 4;
	int result2 = multiply_numbers(num1);
	cout << "Your Second Result: " << result2 << '\n';

	return 0;
}

