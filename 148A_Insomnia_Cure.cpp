#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int k;
    cin >> k;
    int l;
    cin >> l;
    int m;
    cin >> m;
    int n;
    cin >> n;
    int d;
    cin >> d;
    int count = 0;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d;
    }

    else
    {

        for (int i = 1; i < d + 1; i++)
        {
            if ((i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0))
            {
                count++;
            }
        }

        cout << count;
    }
}