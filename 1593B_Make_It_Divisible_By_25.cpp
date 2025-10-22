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

        int zerospace = 100000;
        int start = -1;
        int end = -1;
        int ans = 0;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0' && start == -1)
            {
                start = i;
            }
            else if ((s[i] == '0' || s[i] == '5') && start != -1)
            {
                end = i;
                i = -1;
            }
        }
        zerospace = n - (start + 1) + (start - end - 1);
        start = -1;
        end = -1;
        int fivespace = 100000;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '5' && start == -1)
            {
                start = i;
            }
            else if ((s[i] == '2' || s[i] == '7') && start != -1)
            {
                end = i;
                i = -1;
            }
        }
        fivespace = n - (start + 1) + (start - end - 1);
        cout << min(fivespace, zerospace) << endl;
    }
}