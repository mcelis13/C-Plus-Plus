#include <iostream>

using namespace std;

int main()
{
    int first, second;
    cout << "Dividing 28 by 14. Please wait" << endl;
    first = 28;
    second = 14;
    cout << "Quotient  " << first / second << endl;  /*The quotient is when you divide by whole numbers and get a whole number in return*/
    cout << "Modulus or Remainder  " << first % second << endl; /*The modulus operator is when you divide whole numbers but the result will have a remainder.*/
    first = 32;
    second = 6;
    cout << "Quotient  " << first / second << endl; /* allowed to output a string and an integer if you use the "<<" symbol to connect the outputs as shown in this example*/
    cout << "Modulus   " << first % second << endl;
    first = 30;
    first /= 5;
    cout << "The quotient of varible first when the value is 30 and it is '/= 5; (divided by 5)' is  " << first << endl;
    first = 33;
    first %= 5;
    cout << "The modulus of variable first when the value is 33 and it is '%= 5; (looking for the remainder) is   " << first << endl;
    return 0;
}
