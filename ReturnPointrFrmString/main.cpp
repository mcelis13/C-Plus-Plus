#include <iostream>
#include <sstream> /*include input/output stringstream classes*/
#include <stdlib.h> /*include the standard library header file -- include rand() function*/

using namespace std;

string *GetSecretCode() /* type string function named GetSecretCode with a dereferenced pointer-- meaning the function value can be accessed*/
{
 string *code = new string; /* new string is being assigned a derefering pointer*/
 code->append("CR"); /*new string is accessing member function append and passing a value of "CR"*/

 int randomnumber = rand(); /*rand() function creates a random number*/
 ostringstream converter; /*converts numbers to strings*/
 converter << randomnumber; /*randomnumber is being assigned to converter*/

 code->append(converter.str()); /*object string code is accessing member function append and passing the converter string function as a value*/
 code->append("NQ");/*object string code is accessing member function append and assigning and passing a value of "NQ"*/

 return code; /*The value returned for the function GetSecretCode is the changed value of object Code*/
}

int main()
{
    string *newcode; /*New dereferenced string object NewCode is being declared*/
    int index; /*Index variable being declared*/

    for (index = 0; index < 10; index++) /*For loop is being created for variable index where index starts at 0 and is less than 10--it increases by one at the end
        of each loop*/
    {
        newcode = GetSecretCode(); /* newcode object is being assigned the value of the function GetSecretCode which is really the value of code*/
        cout << *newcode << endl; /* C++ is being asked to print the value of the derefrenced pointer of object newcode to the console*/
    }
    return 0;
}
