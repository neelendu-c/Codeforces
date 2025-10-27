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
        bool tru = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != 0 && arr[i] <= arr[i - 1])
            {
                tru = false;
            }
        }

        if (tru)
        {
            cout << 0 << endl;
        }
        else
        {

            int ops = 0;

            for (int i = n - 1; i > 0; i--)
            {
                while (arr[i-1] >= arr[i] && arr[i]!=0)
                {
                    arr[i - 1] = arr[i - 1] / 2;
                    ops++;
                }
            }

            tru = true;

            for (int i = 1; i < n; i++)
            {
                if (arr[i] <= arr[i - 1])
                {
                    tru = false;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            

            if (tru)
            {
                cout << ops << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}