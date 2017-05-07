#include <iostream>

using namespace std;

int main()
{
    int sum = 0; int value = 0;
    cout << "Please enter the integer you wish to sum and press the space bar before the next number.  When you are done press enter." << endl;
    while (cin >> value)/*This program will read all the values the user is inputing until the user stops */
       {
           sum +=value; /* the values the user has input are now being summed sum = sum+value;*/
           cout << "Sum is: " << sum << endl; /*This program only works if you put this line inside of the while loop*/
       }

    return 0;
}
