#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int x;
    cin >> x;
    int count = 0;

    while (x > 0)
    {
        if (x & 1)
        {
            count++;
        }
        x = x >> 1;
    }
    cout << count;
}