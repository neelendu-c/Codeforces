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

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        int ocount = 0;
        int zcount = 0;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ocount++;
            }
            else
            {
                zcount++;
            }
        }

        int lent = 0;

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '0' && ocount > 0)
            {
                ocount--;
                lent++;
            }
            else if (s[i] == '1' && zcount > 0)
            {
                zcount--;
                lent++;
            }
            else
            {
                i = n;
            }
        }

        cout << (n - lent) << endl;
    }
}