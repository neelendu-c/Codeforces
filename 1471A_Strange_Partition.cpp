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

        int n, x;
        cin >> n >> x;
        int arr[n];
        int minb = 0;
        int maxb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minb += arr[i];
            maxb += ceil(arr[i] * 1.0 / x);
        }

        minb = ceil(minb * 1.0 / x);

        cout << minb << " " << maxb << endl;
    }
}