#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {

        int x;
        cin >> x; // endpoint
        int k;
        cin >> k; // ban div

        if (x % k != 0)
        {
            cout << "1" << endl
                 << x << endl;
        }
        else
        {
            if ((x - 1) % k != 0)
            {
                cout << "2" << endl
                     << x - 1 << " " << 1 << endl;
            }
            else
            {
                cout << "2" << endl
                     << x - 2 << " " << 2 << endl;
            }
        }
    }
}