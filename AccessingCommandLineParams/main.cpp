#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) /* argc--- represents the number of commmand line parameters. argv deals with accessing arrays*/
{
    for (int index=0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }
    return 0;
}
