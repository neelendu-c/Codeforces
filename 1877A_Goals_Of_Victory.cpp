#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {

        int n;
        cin >> n;
        int arr[n - 1];
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        cout << sum * (-1) << endl;
    }
}