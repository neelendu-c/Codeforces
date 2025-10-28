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
        int tree[n];
        int dupe = 0;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> tree[i];
        }

        for (int i = 0; i < n; i++)
        {
            freq[tree[i]]++;
            if (freq[tree[i]] > 1)
            {
                dupe++;
            }
        }

        cout << n - dupe << endl;
    }
}