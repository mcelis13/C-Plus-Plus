#include <iostream>

using namespace std;

int main()
{
   int i;

   cout << "Type any number: ";
   cin >> i;

   if (i > 10)
   {
       cout << "It's greater than 10." << endl;
   }
   else /* An else statement CAN NOT have any conditions unless it is an "else if" statement.*/
   {
        cout << "It's not greater than 10." << endl;
   }
   return 0;
}
