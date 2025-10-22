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
        int arr[n];
        cin >> arr[0];
        int min = arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            min = min & arr[i];
        }

        cout << min << endl;
    }
}