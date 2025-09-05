#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    for (long long z = 0; z < t; z++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;

        if ((c % 2 == 0 && a > b) || (c % 2 != 0 && a + 1 > b))
        {
            cout << "First";
        }
        else
        {
            cout << "Second";
        }

        cout << endl;
    }
}