#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else if (i== 10) /* else if can have a condition like the one in the paranthesis)*/
    {
        cout << "It's equal to 10" << endl;
    }
    else /* else CAN NOT have a condition therefore it must be used at the end and should be used only when all other conditions have failed*/
    {
        cout << "It's less than 10." << endl;
    }
    return 0;
}
