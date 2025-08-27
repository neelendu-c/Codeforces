#include <bits/stdc++.h>
using namespace std;

int main()
{

    string w;
    cin >> w;
    int l = 0;

    for (int i = 0; i < w.length(); i++)
    {
        if (islower(w[i]))
        {
            l++;
        }
    }

    if (l >= w.length() - l)
    {
        for (int i = 0; i < w.length(); i++)
        {
            w[i] = tolower(w[i]);
        }
    }
    else
    {
        for (int i = 0; i < w.length(); i++)
        {
            w[i] = toupper(w[i]);
        }
    }

    cout << w;
}