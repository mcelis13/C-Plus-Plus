#include <iostream>
#include "sharealike.h"
/*This file has been miss named because the variable that is being used by all application is DoubleCheeseburgers but the name of the function
that is being declared in this file and which needs to be pasted on the main file is EatAtJoes() -- So this file should have been called EatAtJoes.cpp*/

using namespace std;

int DoubleCheeseburgers;

void EatAtJoes()
{
    cout << "How many cheeseburgers today?" << endl;
    cout << DoubleCheeseburgers << endl;
}
