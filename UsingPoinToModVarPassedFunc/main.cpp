#include <iostream>

using namespace std;

void ChangesAreGood(int *myparam)
{
    (*myparam) +=10;
    cout << "inside the function:" << endl;
    cout << (*myparam) << endl;
}

int main()
{
    int mynumber = 30;
    cout << "Before the function:" << endl;
    cout << mynumber << endl;

    ChangesAreGood(&mynumber); /*Passing the address of the variable makes it so that the new value is stored inside the varible mynumber container so after the function the new variable will print out*/
    cout << "After the function:" << endl;
    cout << mynumber << endl;
    return 0;
}
