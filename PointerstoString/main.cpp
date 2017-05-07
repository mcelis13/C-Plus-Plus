#include <iostream>

using namespace std;

int main()
{
    string HorribleMovie;
    string *ptrToString;

    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    for (unsigned i = 0; i < HorribleMovie.length(); i++)
    {
        cout << (*ptrToString) [i] << " "; /*You have to use the () parentheses to call the length of a string!! Use Parentheses super important!!*/
    }

    cout << endl;
    return 0;
}
