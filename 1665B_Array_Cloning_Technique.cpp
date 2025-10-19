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
        map<int, int> freq;
        int maxfreq = 0;
        int ops = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
            maxfreq = max(maxfreq, freq[arr[i]]);
        }

        int tempfreq = 0;

        while (maxfreq < n)
        {

            ops++;
            tempfreq = maxfreq;
            while (maxfreq < n && tempfreq != 0)
            {
                tempfreq--;
                ops++;
                maxfreq++;
            }
        }

        cout << ops << endl;
    }
}