#include <iostream> /*Write a program that uses the multiplication operator to print the product instead. I made this work on my own Yay!
I tried it a couple of ways an now I'm going to keep it like this! I'm really excited Cause I'm starting to really do this on my own!*/

using namespace std;

int main()
{
    int x = 0;
    for (int i = 0; i<=12; i++)
    {
        /*for (int x=0; x<=12; x++) this code prints out the multiplication tables 0*1, 0*2 and so on until x and y have printed out all of its tables from 0 to 12*/
            /*{*/
            int Multiples = i * x;
            cout << Multiples << endl;
            x++; /*code allows you print out multiplication tables as follows 0*0= 0, 1*1=1, 2*2=4 and so on until x and y equal 12*/
            /*}*/
    }

    return 0;
}
