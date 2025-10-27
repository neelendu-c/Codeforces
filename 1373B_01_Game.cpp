#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        int zcount = 0;
        int ocount = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ocount++;
            }
            else
            {
                zcount++;
            }
        }

        if (min(ocount, zcount) % 2 != 0)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
}