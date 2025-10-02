#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int m;
    cin >> m;
    int pref[s.length()];
    pref[0] = 0;

    for (int i = 1; i < s.length(); i++)
    {
        pref[i] = pref[i - 1];
        if (s[i] == s[i - 1])
        {
            pref[i]++;
        }
    }

    while (m--)
    {
        int l;
        cin >> l;
        int r;
        cin >> r;

        cout << pref[r - 1] - pref[l - 1] << endl;
    }
}