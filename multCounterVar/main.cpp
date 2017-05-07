#include <iostream>
using namespace std;
int main()
{
    int i, j, x;
    for (i = 0, j = 10; i <= 5, j <= 20; i++, j=j+2)
    {
        x += i + j;
        cout << i << " " << j << " " << x << endl;
    }
    return 0;
}
