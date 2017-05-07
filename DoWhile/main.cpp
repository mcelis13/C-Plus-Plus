#include <iostream>
using namespace std;
int main()
{
    int i = 0;

    do
    {
        cout << i << endl;
        i ++;
    }
    while (i <= 10); /* this ";" is super important as well as the fact that the while has to come after the do part!) */

    cout << "All finished!" << endl;

    return 0;
}
