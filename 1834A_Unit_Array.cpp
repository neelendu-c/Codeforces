#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        int arr[n];
        int pc = 0;
        int nc = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
            {
                nc++;
            }
            else
            {
                pc++;
            }
        }

        int op = 0;

        while (pc - nc < 0 || nc % 2 == 1)
        {
            op++;
            nc--;
            pc++;
        }

        cout << op << endl;
    }
}