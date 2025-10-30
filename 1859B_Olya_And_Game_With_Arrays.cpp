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

        int n;
        cin >> n;
        int maximin = LONG_MAX;
        int sum = 0;
        int minimax = LONG_MAX;

        while (n--)
        {
            int m;
            cin >> m;
            vector<int> arr(m);
            for (int i = 0; i < m; i++)
            {
                cin >> arr[i];
            }

            sort(arr.begin(), arr.end());

            sum += arr[1];
            minimax = min(minimax, arr[1]);
            maximin = min(maximin, arr[0]);
        }

        cout << sum - minimax + maximin << endl;
    }
}