#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int sum;

    cout << "This is a program to get the sum of two numbers." << endl;
    cout <<"Please enter the first integer you wish to be added." << endl;
    cin >> x;
    cout << "Please enter the second integer you wish to be added." << endl;
    cin >> y;
    sum = x + y;
    cout << sum << " is the sum of " << x << " and " << y << endl;
    cout << "Have a good day!" << endl;
    return 0;
}
