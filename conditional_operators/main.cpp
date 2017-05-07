#include <iostream>

using namespace std;

int main()
{
    int first = 10;
    int second = 20;
    string result;
    /*In English this means result gets "equal" if first is equal to second; otherwise, it gets "not equal". */
    result = (first == second) ? "equal" : "not equal";
    cout << result << endl;
    return 0;
}
