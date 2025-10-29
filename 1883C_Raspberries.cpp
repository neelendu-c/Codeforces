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

        int n, k;
        cin >> n >> k;
        int mini = 10000000000;
        int prod = 1;
        int ecount = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%k==0){mini=0;}
            if (arr[i] % 2 == 0)
            {
                ecount++;
            }
            mini = min(mini, (k - arr[i] % k));
        }

        if (k == 4 && ecount == 1)
        {
            cout << min(mini, 1LL) << endl;
        }
        else if (k == 4 && ecount >= 2)
        {
            cout << 0 << endl;
        }
        else if (k == 4 && ecount == 0)
        {
            cout << min(mini, 2LL) << endl;
        }
        else
        {
            cout << mini << endl;
        }
    }
}