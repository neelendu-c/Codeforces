#include <bits/stdc++.h>
using namespace std;

int main()
{

    string n;
    cin >> n;
    int c = 0;
    bool t = true;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            c++;
        }
    }

    for (int i = 0; i < to_string(c).length(); i++)
    {
        if (to_string(c)[i] != 4 && to_string(c)[i] != 4)
        {
            t = false;
        }
    }

    if (t || c == 4 || c == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}