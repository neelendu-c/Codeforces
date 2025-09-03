#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int min = INFINITY;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (min > abs(arr[i]))
        {
            min = abs(arr[i]);
        }
    }

    cout << min;
}