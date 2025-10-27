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
        int size = n * k;

        vector<int> arr(n * k);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        while (k--)
        {
            size = size - ((n / 2) + 1);
            sum += arr[size];
        }

        cout << sum << endl;
    }
}