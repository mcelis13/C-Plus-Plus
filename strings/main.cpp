#include <iostream>

using namespace std;

int main()
{
    string variableString;
    variableString = "abcdef";
    cout << variableString [2] << endl;  /* [2] is accessing the second item in the string IMPORTANT the first character in the string is given a value of 0!
    therefore the character that will be printed out is 'c' not 'b' */
    variableString = "Hello there";
    cout << variableString << endl;
    cout << variableString[4] << endl;
    string x = "abcdef";
    x[1] = 'q'; /*This line of code replaces the first position value in variable x to q instead of b*/
    cout << x << endl;
    return 0;
}
