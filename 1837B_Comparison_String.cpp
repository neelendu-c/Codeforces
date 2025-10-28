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
        string s;
        cin >> s;
        int maxc = 1;
        int tempc = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                tempc++;
            }
            else
            {
                tempc = 1;
            }

            maxc = max(maxc, tempc);
        }

        if (tempc > maxc)
        {
            maxc = tempc;
        }

        cout << maxc + 1 << endl;
    }
}