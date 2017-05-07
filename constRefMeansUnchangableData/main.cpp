#include <iostream>

using namespace std;

string Paranoid(const string *realmessage)
{
    string NewString = *realmessage;
    NewString [6] = 'i'; /*The single quotes are really important for this because otherwise the compiler gets confused as i is type char and not type string.*/
    NewString.replace(9, 1, "");
    NewString.insert(18, "ad");
    NewString.replace(15, 2, "in");
    NewString.replace(23, 7, "!"); /*Why is the second number in this index directions 7?---I don't get it*/
    NewString.replace(4, 3, "ali");

    return NewString;
}

int main()
{
    string message = "The friends are having dinner";
    cout << message << endl;

    string NewMessage = Paranoid(&message); /* You have to create a new string called message to retrieve the changed string
    And give the address of the original message so that the message can be changed*/
    cout << NewMessage << endl;

    return 0;
}
