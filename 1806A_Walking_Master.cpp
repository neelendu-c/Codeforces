#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == c && b == d)
        {
            cout << 0 << endl;
        }
        else if (d < b || d - b < c - a)
        {
            cout << -1 << endl;
        }

        else if (d - b == c - a)
        {
            cout << c - a << endl;
        }
        else
        {
            cout << 2 * abs(d - b) + a - c << endl;
        }
    }
}