#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << 3 << endl;
        }
        else if (n % 3 == 0)
        {
            cout << 0 << endl;
        }
        if (n % 3 == 1)
        {
            cout << 2 << endl;
        }
        if (n % 3 == 2)
        {
            cout << 1 << endl;
        }
    }
}