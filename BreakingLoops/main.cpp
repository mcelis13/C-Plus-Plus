#include <iostream>
using namespace std;
int main()
{
    int i;


for (i=0; i<10; i++)
    {
        cout  << i << " "; /* This prints out the numbers one through 5 because in two lines the code is going to be broken*/
        if (i == 5)
        {
            break; /* Stop incrementing i at this point and do not run the line cout << i * 2 << endl; instead skip to cout << "All finished!" and stop the program.*/
        }
        cout << i * 2 << endl;
    }
    cout << "All finished!" << endl;

    return 0;
}
