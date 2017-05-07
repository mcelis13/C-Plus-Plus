#include <iostream>
#include "ModifiedPen.h"

using namespace std;

void Pen::write_on_paper(string word) /*Member function of class Penn so the class is written first and then two :: sets to call the function*/
{
    if (InkLevelPercent <= 0)
    {
        cout << "Oops! Out of ink!" << endl;
    }
    else
    {
        cout << word << endl;
        InkLevelPercent = InkLevelPercent - word.length();
    }
}

void Pen::break_in_half() /*Insert the two colons when calling a member function of a class*/
{
    InkLevelPercent = InkLevelPercent / 2;
    Length = Length / 2.0;
}

void Pen::run_out_of_ink() /*Insert two sets of :: to call the function run_out_of_ink of class Pen*/
{
    InkLevelPercent = 0;
}
