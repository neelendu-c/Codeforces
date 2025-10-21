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

        int a, b, c;
        cin >> a >> b >> c;

        if (((2 * b - a) % c == 0 && (2 * b - a) / c > 0) || ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) || (((a + c) / 2) % b == 0 && (c - a) % 2 == 0 && ((a + c) / 2) / b > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}