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
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            else
            {
                i = n + 1;
            }
        }

        cout << count << endl;
    }
}