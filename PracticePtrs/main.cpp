#include <iostream>

using namespace std;

int main()
{
    int NewBackpack = 4;
    int OldBackpack = 2;
    int *ptr;
    cout << "Welcome to the Backpack Mart! We are here to aid you in your quest to buy a brand new backpack!"
    cout << "Number of pockets in New Backpack " << NewBackpack << endl;
    cout << "Compared it to the number of pockets your Old Backpack had which was just " << OldBackpack << "!" << endl;

    ptr = &NewBackpack;
    *ptr = 2;

    cout << "I was wrong the New Backpack actually has " << NewBackpack << "pockets." << endl;

    *ptr = 5;
    cout << "Just kidding your New Backpack doesn't have 4 pockets it actually has " << NewBackpack << "" endl;


}
