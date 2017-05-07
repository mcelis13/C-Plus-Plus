#include <iostream> /*My third application that I was able to complete on my own with no help and I did it pretty fast with no mistakes!!! Yay*/
/*Write a program that prompts the user for two integers.  Print each number in the range specified by those two integers-- made the program with floats
after I did it with integers because the program crashes if you use a float*/

using namespace std;

int main()
{
    float x; /*This function could be better if we make this a float so if the user inputs 2.3 it will still be able to return the correct number.*/
    float y;
    cout << "This program will ask you to enter two numbers." << endl;
    cout << "Please enter your first number " << endl;
    cin >> x;
    cout << "Please enter your second number " << endl;
    cin >> y;
    cout << "These are the numbers that you have entered " << x << "  and " << y << ".  Have a good day!" << endl;
    return 0;
}
