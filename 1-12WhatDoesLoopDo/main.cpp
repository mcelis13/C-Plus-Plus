#include <iostream> /*What does the following for loop do?  What is the final value of sum?
The final value is really 5050 but it decrease back to 100 so that is the sum when the program finishes*/

using namespace std;

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum +=i;
        cout << sum << endl; /*This shows that the loop starts at -100 and ends at 100.  It adds i + sum to the sum variables and prints it out.
        It goes from 100 to 5050 and starts to decrease from there all the way back to 100*/
    }
    return 0;
}
