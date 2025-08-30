#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool c = false;
        int x = 0;

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                c = true;
                break;
            }

            if (s[i] == '.')
            {
                x++;
            }
        }

        if (c)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}