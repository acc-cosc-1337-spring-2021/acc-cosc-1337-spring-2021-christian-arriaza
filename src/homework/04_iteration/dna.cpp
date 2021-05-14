#include "dna.h"
#include <iostream>

using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

double get_gc_content(const string& dna)
{
    double count = 0;
    double percentage;

    for(auto ch: dna)
    {
        if(ch == 'C' || ch == 'G')
        {
            count += 1;
        }
    }

    percentage = count / dna.size();
    return percentage;
}

string get_reverse_string(string dna)
{
    string reversed;

    for(auto ch: dna)
    {
        reversed.insert(0, 1, ch);
    }

    return reversed;
}

string get_dna_complement(string dna)
{
    string reversed_dna = get_reverse_string(dna);
    string complement;

    for(auto ch: reversed_dna)
    {
        if(ch == 'T')
        {
            complement.append("A");
        }
        else if (ch == 'A')
        {
            complement.append("T");
        }
        else if (ch == 'G')
        {
            complement.append("C");
        }
        else if (ch == 'C')
        {
            complement.append("G");
        }
    }
    return complement;
}