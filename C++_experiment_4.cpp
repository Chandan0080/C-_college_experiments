#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    if ( x % 2 == 0)
        cout << x << " is even.";
    else
        cout << x << " is odd.";

    return 0;
}