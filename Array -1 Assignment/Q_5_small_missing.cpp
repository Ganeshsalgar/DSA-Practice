#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,1, 2, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    // smallest element

    int x = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}