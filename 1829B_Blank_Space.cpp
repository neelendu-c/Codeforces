#include <bits/stdc++.h>
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
        int maxi = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                if (maxi < count)
                {
                    maxi = count;
                }
                count = 0;
            }
        }

        cout << max(maxi, count) << endl;
    }
}