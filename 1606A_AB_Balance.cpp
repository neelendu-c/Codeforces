#include <bits/stdc++.h>
using namespace std;
#define int long long

void neel()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main()
{
    neel();

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        bool check = false;
        int ab = 0;
        int ba = 0;
        int n = s.size();

        s[n - 1] = s[0];

        cout << s << endl;
    }
}