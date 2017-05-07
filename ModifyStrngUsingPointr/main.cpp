#include <iostream>

using namespace std;

void Paranoid(string *realmessage)
{
    (*realmessage)[6] = 'i'; /*(*realmessage)--equals the dereferenced pointer*/
    realmessage->replace(9, 1, "");
    realmessage->insert(18, "ad");
    realmessage->replace(15, 2, "in");
    realmessage->replace(23, 7, "!");
    realmessage->replace(4, 3, "ali");
}
int main()
{
    string message = "The friends are having dinner";
    cout << message << endl;

    Paranoid(&message); /* (uses the &message(passes the address of the variable message) Passing by reference is what this is called
                            Passing by reference means the function can modify the original content of that Variable
                            Which is why the original content of message "The friends are having dinner"
                            Can be changed by the Paranoid function above the main function!)*/
    cout << message << endl;

    return 0;
}
