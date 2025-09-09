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
        string s;
        cin >> s;
        vector<int> arr;
        int u = 0;
        int val;

        for (int i = 0; i < n; i++)
        {
            val = s[i] - 0;
            arr.push_back(val);
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (s[i] - 0 != arr[i])
            {
                u++;
            }
        }

        cout << u / 2 << endl;
    }
}