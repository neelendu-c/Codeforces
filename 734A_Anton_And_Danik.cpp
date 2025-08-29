#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string w;
    cin >> w;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (w[i] == 'A')
        {
            a++;
        }
    }

    if (a > n - a)
    {
        cout << "Anton";
    }
    else if (a < n - a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}