#include <iostream> /*My first try at while loops without following an example and doing it on my own! Good Job Maddie--This was harder than I thought!*/

using namespace std;

int main()
{
    int i = 50;
    int Number;
    int sum = i;

    while (i<=100)
    {
        cout << i << endl;
        Number = i;
        cout<< "The current sum " << sum << endl;
        sum = (Number+1) + i;
        i++;
    }
    cout << "Above the numbers 50 through 100 printed out and the sums of those numbers as the loop progresses"<< endl;
/*One thing I need to work on is getting the total sum of all the sums printed out!*/
    return 0;
}

