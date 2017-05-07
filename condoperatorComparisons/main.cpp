#include <iostream>

using namespace std;

int main()
/* Collecting user input via cin and then printing the output using cout */
{
    string name; /* Variable name of type string being declared*/
    cout << "Type your name: ";/*via cout we are printing the string onto the console to get user input*/
    cin >> name; /*Extracting the user input from console via cin and assigning the value to name*/
    cout << "Your name is " << name << endl; /* cout is printing The string and embedding the name variable into the string*/
    return 0;
}
