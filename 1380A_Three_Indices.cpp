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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool ans = false;
        int first, second, third = -1;

        for (int j = 1; j < n - 1; j++)
        {
            for (int i = 0; i < j; i++)
            {
                if (arr[i] < arr[j])
                {
                    first = i;
                    break;
                }
            }

            for (int k = j + 1; k < n; k++)
            {
                if (arr[k] < arr[j])
                {
                    third = k;
                    break;
                }
            }

            if (first != -1 && third != -1 && arr[first] < arr[j] && arr[third] < arr[j] && first != third)
            {
                cout << "YES" << endl;
                cout << first + 1 << " " << j + 1 << " " << third + 1 << endl;
                ans = true;
                break;
            }
        }

        if (ans == false)
        {
            cout << "NO" << endl;
        }
    }
}