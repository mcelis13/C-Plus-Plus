#include <iostream>

using namespace std;
int primes;

int doSearch(int array, int targetValue)
{
    int guess;
    int min = 0;
    int max = &array.length -1; /*int isn't a class type so it doesn't have member functions is what the error mess is saying*/

    while (!targetValue)
    {
        guess =((min+max)/2) + 0.5;
        if (guess == targetValue)
        {
            return guess;
        }
        else if (guess < targetValue)
        {
            min = guess + 1;
        }
        else
            {
                max = guess - 1;
            }
            return 0;
    }
}


int main()
{
    int primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
		41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];

		int result = doSearch(primes,73);
		cout<< "Found prime number 73 at index " << result << endl;
        return 0;
}
