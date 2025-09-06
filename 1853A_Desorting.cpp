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
        vector<int> arr;
        int min;
        int minpos;
        for (int i = 0; i < n; i++)
        {
            cin >> min;
            arr.push_back(min);
        }

        if (is_sorted(arr.begin(), arr.end()))
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] - arr[i - 1] < min)
                {
                    min = arr[i] - arr[i - 1];
                    minpos = i;
                }
            }

            if (min > 0 && min % 2 != 0)
            {
                cout << min / 2 + 1 << endl;
            }
            else if (min > 0 && min % 2 == 0)
            {
                cout << min / 2 + 1 << endl;
            }

            else
            {
                cout << "1" << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
}