#include <bits/stdc++.h>
using namespace std;
#define int long long

void neel()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

bool has1(string s, int i, int k)
{

    int n;
    if (0 >= i - k + 1)
    {
        n = 0;
    }
    else
    {
        n = i - k + 1;
    }

    bool found = false;

    for (int j = n; j < i; j++)
    {
        if (s[j] == '1')
        {
            found = true;
        }
    }
    return found;
}

signed main()
{
    neel();

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int op = 0;

        bool protect = false;

        for (int i = 0; i < n; i++)
        {
            if (has1(s, i, k) && s[i] == '1')
            {
                continue;
            }
            else if (s[i] == '1')
            {
                op++;
            }
        }

        cout << op << endl;
    }
}