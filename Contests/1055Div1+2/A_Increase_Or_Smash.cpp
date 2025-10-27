#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int u;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        u = n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    u--;
                    break;
                }
            }
        }

        cout << (2 * u) - 1 << endl;
    }
}