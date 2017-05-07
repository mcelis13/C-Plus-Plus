#include <iostream>
#include <sstream>

using namespace std;

int StringToNumber(string Mystring)
{
    istringstream converter(Mystring);
    int result;
    converter >> result;
    return result;
}

string NumberToString(int Number)
{
    istringstream converter;
    converter << Number;
    return converter.str();
}
int main()
{
    cout << "Number to String" << endl;
    string mystring = NumberToString(80525323); /*converts to string without changing the the actually numbers written*/
    cout << mystring << endl;
    return 0;
}
