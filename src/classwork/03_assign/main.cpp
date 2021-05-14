//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"
#include "decision.cpp"

//Write namespace using statements for cout and cin
using namespace std;


int main() 
{
	int grade;

	cout << "Enter your grade: ";
	cin >> grade;

	if (grade < 0 || grade > 100)
	{
		cout << "You have entered an invalid grade.";
	}
	else
	{
		cout << "If - Your grade is a(n) " << get_letter_grade_using_if(grade) << '\n';
		cout << "Switch - Your grade is a(n) " << get_letter_grade_using_switch(grade) << '\n';
	}

	return 0;
}

