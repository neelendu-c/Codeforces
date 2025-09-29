#include <bits/stdc++.h>
using namespace std;

int count1(int x)
{
    int count = 0;

    while (x > 0)
    {
        count += x & 1;
        x >>= 1;
    }

    return count;
}

int main()
{

    int n;
    cin >> n; // 0 to n-1 soldier types
    int m;
    cin >> m; // 1 to m+1 players
    int k;
    cin >> k; // maximum differences
    int army[m];
    int count = 0;

    for (int z = 0; z < m; z++)
    {
        cin >> army[z];
    }
    int x;
    cin >> x;

    for (int i = 0; i < m; i++)
    {
        if (count1((army[i] ^ x)) <= k)
        {
            count++;
        }
    }
    cout << count;
}