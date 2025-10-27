#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;
        int z;
        cin >> z;

        if ((x & y) == z || (y & z) == x || (x & z) == y || ((x & z) == (x & y) & (x & y) == (z & y)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}