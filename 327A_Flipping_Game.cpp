#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int n;
    cin >> n;
    int arr[n];
    int maxi = 0;
    int ones = 0;
    int val;
    int flip = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            ones++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            val = 1;
        }
        else
        {
            val = -1;
        }

        flip = max(val, val + flip);
        maxi = max(maxi, flip);
    }

    if (ones == n)
    {
        cout << ones - 1;
    }
    else
    {
        cout << maxi + ones;
    }
}