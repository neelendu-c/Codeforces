#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n; // number of refuels
        int x;
        cin >> x; // endpoint
        int arr[n];
        int max = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] - arr[i] > max && i != n - 1)
            {
                max = arr[i + 1] - arr[i];
            }
        }

        if ((x - arr[n - 1]) * 2 > max)
        {
            max = (x - arr[n - 1]) * 2;
        }
        if (max < arr[0])
        {
            max = arr[0];
        }

        cout << max << endl;
    }
}