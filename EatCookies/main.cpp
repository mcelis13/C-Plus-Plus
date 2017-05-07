#include <iostream>

using namespace std;

int cookies_I_want_to_eat;

void EatCookies(int *cookies_in_my_belly)
{
    int cookies_I_want_to_eat;
    cout << "How many cookies do you want to eat? " << endl;

    cin >> cookies_I_want_to_eat;

    (*cookies_in_my_belly) -= cookies_I_want_to_eat;
}

int main()
{

    int cookies_available_to_eat = 20;

    cout << "Number of cookies available to eat " << cookies_available_to_eat << endl;

    EatCookies(&cookies_available_to_eat);

     cout << "Number of cookies left after I ate "  <<  cookies_available_to_eat << endl;

    return 0;
}
