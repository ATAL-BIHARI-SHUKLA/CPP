#include <iostream>
using namespace std;

int main()
{
    int a, i, num;
    cout << "enter a number:-";
    cin >> a;
    for (i = 1; i <= 10; i++)
    {
        num = i * a;
        cout << a << "*" << i << " is:" << num << endl;
    }
    return 0;
}