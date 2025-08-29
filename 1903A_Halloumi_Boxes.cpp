#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int v;

    for (int i = 0; i < t; i++)
    {
        int n;
        int k;
        cin >> n;
        cin >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            arr.push_back(v);
        }

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES";
        }
        else if (k == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
}