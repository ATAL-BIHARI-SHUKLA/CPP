#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 0, arr[7] = {1, 4, 7, 2, 5, 8, 3};
    // cout << "enter values of list: ";
    // for (i = 1; i <= 7; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "your list is: ";
    // for (i = 0; i <= 7; i++)
    // {
    //     cout << arr[i] << ", ";
    // }
    cout << "enter number u want to search: ";
    cin >> n;
    // we search our number
    for (i = 1; i <= 7; i++)
    {
        if (arr[i] == n)
        {
            j = i;
            // cout << n << " is found at idex" << i;
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