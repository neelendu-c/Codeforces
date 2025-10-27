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

        int x0, n;
        cin >> x0 >> n;

        int pos;

        if (n % 4 == 1)
        {
            pos = -n;
        }
        else if (n % 4 == 2)
        {
            pos = 1;
        }
        else if (n % 4 == 3)
        {
            pos = n + 1;
        }
        else if (n % 4 == 0)
        {
            pos = 0;
        }

        if (x0 % 2 == 0)
        {
            pos = x0 + pos;
        }
        else
        {
            pos = x0 - pos;
        }

        cout << pos << endl;
    }
}