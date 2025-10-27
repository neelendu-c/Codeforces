#include <bits/stdc++.h>
using namespace std;
#define int long long

void neel()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main()
{
    neel();

    int n;
    cin >> n;

    while (n--)
    {

        string s, t;
        cin >> s >> t;
        int m = t.size();
        int n = s.size();

        vector<int> freq_t(26, 0);

        for (int i = 0; i < m; i++)
        {
            freq_t[t[i] - 'A']++;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (freq_t[s[i] - 'A'] > 0)
            {
                freq_t[s[i] - 'A']--;
            }
            else
            {
                s[i] = '.';
            }
        }

        string final = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] != '.')
            {
                final += s[i];
            }
        }

        if (final == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}