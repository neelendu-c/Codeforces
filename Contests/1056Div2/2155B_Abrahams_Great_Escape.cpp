#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int esc = 0;
        string row = "";
        if ((n * n) - 1 == k || k > (n * n))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                row = "";
                for (int j = 0; j < n; j++)
                {
                    if (esc < k)
                    {
                        row += 'U';
                        esc++;
                    }
                    else
                    {
                        if (i != n - 1)
                        {
                            row += 'D';
                        }
                        else
                        {
                            if (j == n - 1 && row[j - 1] != 'U' && j > 0)
                            {
                                row += 'L';
                            }
                            else if (j == n - 1 && row[j - 1] == 'U' && j > 0)
                            {
                                row += 'D';
                            }
                            else
                            {
                                row += 'R';
                            }
                        }
                    }
                }
                cout << row << endl;
            }
        }
    }
}