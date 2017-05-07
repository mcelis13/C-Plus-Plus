#include <iostream>

using namespace std;

int main()
{
    int final;
    int time;
    final = 28;
    time = 18;
    int start = final -= time; /*final minus time is shown by the -= sign*/
    final--;  /*"--"symbolises subtract one from the variable final*/
    cout << final - time << endl;
    cout << final - 5 << endl;
    cout << start << endl;

    return 0;
}
