#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;

    while (k > 0)
    {
        if (to_string(n)[to_string(n).length() - 1] == '0')
        {
            n = n / 10;
            k--;
        }
        else
        {
            k--;
            n = n - 1;
        }
    }

    cout << n;
}