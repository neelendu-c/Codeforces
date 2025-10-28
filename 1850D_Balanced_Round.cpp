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
        int k;
        cin >> k;
        int v;
        int maxl = 0;
        int templ = 1;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> v;
            arr.push_back(v);
        }

        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] <= k)
            {
                templ++;
            }
            else
            {

                templ = 1;
            }
            if (templ > maxl)
            {
                maxl = templ;
            }
        }

        if (n > 1)
        {
            cout << n - maxl << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}