#include <iostream>

using namespace std;

void SetUsername(string newname) /*Void functions do not return a value HOWEVER it can print out something to the console*/
{
    cout << "New User is " << newname << endl;
}
int main()
{
    SetUsername("Harold"); /*the parameter newname is being assigned string "Harold" as the value.*/
    return 0;
}
