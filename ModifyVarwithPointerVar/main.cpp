#include <iostream>
using namespace std;
int main()
{
    int NumberofPotholes;
    int *ptr;
    ptr = &NumberofPotholes; /*ptr is being assigned the address of the Variable NumberofPotholes*/
    *ptr = 6087; /* the dereferencing ptr (*ptr) of the variable NumberofPothoes is being assigned a value of 6087*/
    cout << NumberofPotholes << endl;
    cout << &NumberofPotholes << endl;
    return 0;
}
