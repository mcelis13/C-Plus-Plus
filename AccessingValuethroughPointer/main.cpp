#include <iostream>
using namespace std;
int main()
{
    int NumberofPotholes;
    int *ptr = &NumberofPotholes;
    int SaveForLater;
    *ptr = 6087;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    cout << &NumberofPotholes << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl;

    return 0;
}
