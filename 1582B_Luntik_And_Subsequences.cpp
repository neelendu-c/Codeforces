#include <bits/stdc++.h>
using namespace std;
#define int long long

void neel()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int powint(int a, int n)
{
    for (int i = 1; i < n; i++)
    {
        a = a * 2;
    }

    if (n == 0)
    {
        a = 1;
    }

    return a;
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
        int arr[n];
        int onecount = 0;
        int zerocount = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            if (arr[i] == 1)
            {
                onecount++;
            }
            if (arr[i] == 0)
            {
                zerocount++;
            }
        }

        cout << onecount * (powint(2, zerocount)) << endl;
    }
}