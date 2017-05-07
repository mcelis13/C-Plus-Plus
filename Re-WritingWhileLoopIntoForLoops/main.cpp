#include <iostream> /*Write a for loop to pirnt the sum of number 50 to 100.  Yay! I did it on my first try!! Yes!!!*/

using namespace std;

int main()
{
    int sum = 0;
    for(int i =50; i<=100; i++)
    {
        sum += i;
        cout << "Initial value    " << i << "  Current sum   " << sum << endl;
    }
    return 0;
}
