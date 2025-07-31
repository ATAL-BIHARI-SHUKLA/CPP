#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 0, arr[7];
    // cout << "enter values of list: ";
    for (i = 1; i <= 7 + 1; i++)
    {
        cin >> arr[i];
    }
    cout << "your list is: ";
    for (i = 1; i <= 7 + 1; i++)
    {
        cout << arr[i] << ", ";
    }
    // we search our number
    cout << "enter number u want to search: ";
    cin >> n;
    for (i = 1; i <= 7 + 1; i++)
    {
        if (arr[i] == n)
        {
            j = i;
        }
    }

    if (j == 0)
    {
        cout << "number not found" << endl;
    }
    else
    {
        cout << n << " is found at idex: " << j;
    }

    return 0;
}