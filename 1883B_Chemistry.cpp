#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int oddcount = 0;

        vector<int> foc(26, 0);

        for (int i = 0; i < n; i++)
        {
            foc[s[i] - 'a']++; // convert to index
        }

        for (int i = 0; i < 26; i++)
        {
            oddcount += foc[i] % 2;
        }

        if (oddcount > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}