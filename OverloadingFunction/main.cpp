#include <iostream> /*This is an overloading function example--When a function with the same name is used in two instances or more
and are then called in the main function.  For this to be able to work the two functions have to have different
parameters for the functions --- possibly different return types as well.*/

using namespace std;

void Combine(string first, string second) /*First function called Combine uses strings*/
{
    cout << first << " " << second << endl;
}

void Combine(int first, int last) /*Second function called Combing uses integers ---This function could have also return strings but
if it would have had 3 or more parameters it would also work or completely different parameters that were still strings*/
{
    int sum = first + second;
    cout << first << " " << second << " " << sum << endl;
}

int main()
{
    Combine("David", "Letterman");
    Combine(15, 20);
    return 0;
}
