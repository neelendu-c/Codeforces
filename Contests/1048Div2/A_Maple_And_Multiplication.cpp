#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;

        if (a == b)
        {
            cout << "0" << endl;
        }
        else if (a % b == 0 || b % a == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}