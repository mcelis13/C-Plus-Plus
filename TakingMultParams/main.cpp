#include <iostream>

using namespace std;

string ConnectNames(string first, string last) /* Must declare the data type of each parameter or it wil not work*/
{
    return first + " " + last; /* You can make calculations and figuring inside the return statement.  If the calculation is complicated then break it down
    into multiple variables*/
}

int main()
{
    cout << ConnectNames("Richard", "Nixon") << endl;
    return 0;
}
