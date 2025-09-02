#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s;
    cin >> s;
    int out[s];
    int in[s];
    int max = 0;
    int tc = 0;

    for (int i = 0; i < s; i++)
    {
        cin >> out[i];
        cin >> in[i];

        tc = tc + in[i] - out[i];

        if (max < tc)
        {
            max = tc;
        }
    }
    cout << max;
}