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
        int ans = 0;
        int zcount = 0;
        bool zero = false;
        int left = 0;
        int right = n - 1;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zcount++;
            }
        }

        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 0)
        {
            right--;
        }

        for (int i = left; i <= right; i++)
        {
            if (arr[i] == 0)
            {
                zero = true;
            }
        }

        if (zcount == n)
        {
            cout << 0 << endl;
        }
        else if (zero == false)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}