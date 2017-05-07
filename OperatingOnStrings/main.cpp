#include <iostream>

using namespace std;

int main()
{
    string words = "Something interesting and bizzare";
    cout << words << endl;

    words.insert(10, "seriously "); /* At index 10 insert the word "seriously "*/
    cout << words << endl;

    words.erase(19,16); /* At index 19 erase 16 characters*/
    cout << words << endl;

    words.replace(4, 5, "body"); /* At index 4 replace 5 characters with the word body and for the last index spot it leaves a space*/
    cout << words << endl;
    return 0;
}
