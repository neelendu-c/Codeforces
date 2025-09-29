#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;

        if (a == b)
        {
            cout << c << endl;
        }
        else if (a == c)
        {
            cout << b << endl;
        }
        else if (b == c)
        {
            cout << a << endl;
        }
    }
}