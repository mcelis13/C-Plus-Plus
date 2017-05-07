#include <iostream>

using namespace std;

int main()
{
    string MyPhoneContacts;
    string *ptrToContacts;
    MyPhoneContacts = "Madeline Celis"; /*Can not use this method to put an array of strings */
    ptrToContacts = &MyPhoneContacts;
    cout << *ptrToContacts << endl;
    return 0;
}
