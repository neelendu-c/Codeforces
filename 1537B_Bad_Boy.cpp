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

        int n, m, i, j;
        cin >> n >> m >> i >> j;

        int ans1x, ans2x, ans1y, ans2y;

        if (i <= (n / 2))
        {
            ans1x = n;
        }
        else
        {
            ans1x = 1;
        }
        if (j <= (m / 2))
        {
            ans1y = m;
        }
        else
        {
            ans1y = 1;
        }

        // check

        if (i == ans1x && i == n)
        {
            ans1x = 1;
        }
        if (i == ans1x && i == 1)
        {
            ans1x = n;
        }
        if (j == ans1y && j == m)
        {
            ans1y = 1;
        }
        if (j == ans1y && j == m)
        {
            ans1y = 1;
        }

        ans2x = n - ans1x + 1;
        ans2y = m - ans1y + 1;

        if (ans2x == i && ans2y == j)
        {
            ans2x = n - i + 1;
        }
        if (ans2y == j && ans2x == i)
        {
            ans2y = m - j + 1;
        }

        cout << ans1x << " " << ans1y << " " << ans2x << " " << ans2y << endl;
    }
}