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

        int n;
        cin >> n;

        if (n < 4 || n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (n + 5) / 6 << " " << n / 4 << endl;
        }
    }
}