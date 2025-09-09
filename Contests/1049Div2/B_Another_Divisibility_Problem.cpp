#include <bits/stdc++.h>
using namespace std;

int len(long long n)
{
    int c = 0;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    return c;
}

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        long long x;
        cin >> x;

        for (long long y = 1; y > -1; y++)
        {
            int d = len(y);
            long long c = x * (pow(10, d)) + y;
            if (c % (x + y) == 0)
            {
                cout << y << endl;
                y = -2;
            }
        }
    }
}