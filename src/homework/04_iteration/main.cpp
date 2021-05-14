//write include statements
#include "dna.h"
#include "dna.cpp"

#include <iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice = 0;
	char repeat;

	string dna_string;

	do
	{
		cout << "GET GC CONTENT (1)" << '\n';
		cout << "GET DNA COMPLEMENT (2)" << '\n';
		cout << "PLEASE CHOOSE (1) OR (2): " << '\n';
		cin >> choice;

		while (!(choice == 1 || choice == 2))
		{
			cout << "INVALID CHOICE, TRY AGAIN: ";
			cin >> choice;
		}

		cout << "ENTER DNA STRING: ";
		cin >> dna_string;

		if (choice ==1)
		{
			cout << "GC CONTENT OF THE STRING IS: " << get_gc_content(dna_string) * 100 << "%" << '\n';
		}
		else
		{
			cout << "THE COMPLEMENT OF THE DNA STRING IS: " << get_dna_complement(dna_string) << '\n';
		}

		cout << "WOULD YOU LIKE TO PROCESS ANOTHER STRING? ENTER Y TO CONTINUE: ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	return 0;
}