#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (i < n && arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            ans += count * (count + 1) / 2;
            count = 1;
        }
    }

    cout << ans;
}