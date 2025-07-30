#include <iostream>
using namespace std;

int main()
{
    int n, j, i, arr[] = {7, 9, 8, 6, 4, 3, 5};
    // cout << "enter values of list: ";
    // for (i = 0; i <= 7; i++)
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
    for (j = 0; j < 7; j++)
    {
        if (arr[j] == n)
        {
            cout << n << " is found at idex" << i;
            break;
        }
        else
        {
            cout << "number not found" << endl;
        }
    }

    return 0;
}