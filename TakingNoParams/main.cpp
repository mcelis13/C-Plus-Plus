#include <iostream>

using namespace std;

string Username()
{
    return "Elisha"; /* Set the function to return a value that way you don't have to declare a parameter when calling the function inside another function*/
}
int main()
{
    cout << Username() << endl;
    return 0;
}
