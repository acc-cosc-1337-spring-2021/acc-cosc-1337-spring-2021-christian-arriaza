//cpp
#include "decision.h"

using std::string;

string get_letter_grade_using_if(int grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if (grade >= 80 && grade < 89)
    {
        return "B";
    }
    else if (grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

string get_letter_grade_using_switch(int grade)
{
    string letter;

    switch (grade)
    {
    case 90 ... 100:
        letter = "A";
        break;
    case 80 ... 89:
        letter = "B";
        break;
    case 70 ... 79:
        letter = "C";
        break;
    case 60 ... 69:
        letter = "D";
        break;
    case 0 ... 59:
        letter = "F";
        break;
    }

    return letter;
}