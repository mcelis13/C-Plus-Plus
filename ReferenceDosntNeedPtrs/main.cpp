#include <iostream>

using namespace std;

void MessMeUp(int &myparam) /*because it provides the address of myparam as a parameter of the function it is able to change the contents of myparam without a pointer*/
{
    myparam = myparam *2 +10;
}

int main()
{
    int mynumber = 30;
    MessMeUp(mynumber); /*Mess me up is going to use the address of mynumber to access the mynumber variable of value 30.
    MessMeUp will use the value 30 of mynumber as its parameter and do the following calculation 30*2 = 60 + 10= 70.*/
    cout << mynumber << endl; /* Since we gave the address of mynumber it will now output the value of 70 instead of it's original value of 30.*/

    return 0;
}
