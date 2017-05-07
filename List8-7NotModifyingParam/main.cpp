#include <iostream>
#include "Pen.h"

using namespace std;

void Inspect (const Pen *Checkitout)
{
    cout << Checkitout->Brand << endl; /*able to access the brand member variable throught the -> because it is a string variable*/
}

int main()
{
    Pen *MyPen = new Pen();
    MyPen->Brand = "Spy Plus Camera";

    Inspect(MyPen);
    return 0;
}
