#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, n;
        cin >> a >> b >> n;
        int time = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            time += min(a - 1, arr[i]);
        }

        cout << time + b << endl;
    }
}