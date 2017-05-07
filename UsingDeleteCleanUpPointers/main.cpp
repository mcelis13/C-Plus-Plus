#include <iostream>

using namespace std;

int main()
{
    string *phrase = new string ("All presidents are cool!!!");
    cout << *phrase << endl;

    (*phrase)[20] = 'r'; /*() and * are used to call the various string functions you can also just use -> to call a string function as seen below*/
    phrase -> replace (22, 4, "oked");
    cout << *phrase << endl;

    delete phrase; /*Deletes object*/
    return 0; /*Clears the pointer*/
}
