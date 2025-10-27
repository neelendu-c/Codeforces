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

        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "0 0" << endl;
        }
        else
        {
            int ans = abs(a - b);
            int ops = min(b % ans, ans - b % ans);
            cout << ans << " " << ops << endl;
        }
    }
}