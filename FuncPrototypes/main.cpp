#include <iostream>

using namespace std;

void PrintName(string first, string last); /*This is a line called a prototype! Just copy and paste it from the function it belongs to and add a semicolon at the end*/

int main()
{
    PrintName("Thomas", "Jefferson");
    return 0;
}

void PrintName(string first, string last) /* Sinc eyou put the prototype at the top you can write the full function later in the source code*/
{
    string fullname = first + " " + last;
    cout << fullname << endl;
}
