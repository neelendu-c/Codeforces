#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        arr[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        int mink = abs(arr[1] - 1);

        for (int i = 1; i < n + 1; i++)
        {
            mink = __gcd(mink, abs(arr[i] - i));
        }

        cout << mink << endl;
    }
}