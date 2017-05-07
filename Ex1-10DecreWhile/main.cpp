#include <iostream>  /*Second while loop function I made which I did not loop at any souces to help me do it-- made some mistakes but was able to fix it!! Yay!!!*/

/*Use teh decrement operator to write a while loop that prints the numbers from ten down to zero*/
using namespace std;

int main()
{
    int i = 10; /*start with the highest number and decrease from there*/
    while (i>=0) /* set the variable equal to or greater than the number where you want the loop to stop at*/
    {
        cout << i << endl; /*print out the number and then make sure it decreases the number afterwards when the loop restarts*/
        i--;
    }
    return 0;
}
