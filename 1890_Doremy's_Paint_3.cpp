#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t; // no. of test
    int val;

    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> fmap; // freq count
        for (int i = 0; i < n; i++)
        {
            fmap[arr[i]]++;
        }

        if (fmap.size() > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            int f1 = fmap.begin()->second; // freq finds
            int f2 = fmap.rbegin()->second;

            if (f1 == f2 || (n % 2 != 0 && abs(f1 - f2) == 1)) // condition
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}