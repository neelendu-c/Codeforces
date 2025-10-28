#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, q;
        cin >> n >> q;
        int arr[n];
        arr[0] = 0;
        int pref[n];
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }

        pref[0] = arr[0];
        for (int i = 1; i < n + 1; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }

        for (int i = 0; i < q; i++)
        {
            int l; // starting range
            int r; // ending range
            int k; // value set to
            cin >> l >> r >> k;
            int tempsum = 0;

            tempsum = pref[n] + (pref[l - 1] - pref[r]) + (r - l + 1) * k;

            if (tempsum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}