#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k; // range end
        int x;
        cin >> x; // left out int

        if (x != 1)
        {
            cout << "YES" << endl
                 << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "1 ";
            }
            cout << endl;
        }

        else
        {
            if (k == 1)
            {
                cout << "NO" << endl;
            }
            else if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl
                         << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << "2 ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (n % 2 != 0)
                {
                    cout << "YES" << endl
                         << (n - 3) / 2 + 1 << endl;
                    for (int i = 0; i < (n - 3) / 2; i++)
                    {
                        cout << "2 ";
                    }
                    cout << "3" << endl;
                }
                else
                {
                    cout << "YES" << endl
                         << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << "2 ";
                    }
                    cout << endl;
                }
            }
        }
    }
}