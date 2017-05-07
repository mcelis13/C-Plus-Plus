#include <iostream>

using namespace std;

int main()
{
    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString <<endl;
    cout << ptrToString << " " << &GoodMovie << " " << "You are asking for the same value but in different ways" << endl;

    return 0;
}
