#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (x > (n * (n + 1)) / 2 || x < (k * (k + 1)) / 2 || x > ((n * (n + 1)) / 2 - (n - k) * (n - k + 1) / 2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}