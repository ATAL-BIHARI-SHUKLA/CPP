#include <iostream>
using namespace std;

int main()
{
    int a, fact = 1, i;
    cout << "enter a number:- ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of" << a << "is:-" << fact;

    return 0;
}