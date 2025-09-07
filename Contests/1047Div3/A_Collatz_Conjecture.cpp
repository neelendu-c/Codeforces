#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {

        int k;
        cin >> k; // steps
        int x;
        cin >> x; // final value
        int realval = x;

        for (int i = 0; i < k; i++)
        {
            realval = realval * 2;
        }

        cout << realval;
        if (z != t - 1)
        {
            cout << endl;
        }
    }
}