#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    bool done = false;

    while (!done)
    {
        cout << i << endl;
        i++;
        if (i == 10)
            done = true;
    }

    cout << "All finished!" << endl;
    return 0;
}
