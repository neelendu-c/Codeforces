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
        int arr[n];
        vector<int> copy;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        copy.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] <= arr[i])
            {
                copy.push_back(arr[i]);
            }
            else if (arr[i] != 1)
            {
                copy.push_back((arr[i] - 1));

                copy.push_back(arr[i]);
            }
            else if (arr[i] == 1)
            {
                copy.push_back((1));

                copy.push_back(arr[i]);
            }
        }
        cout << copy.size() << endl;
        for (int i = 0; i < copy.size() - 1; i++)
        {
            cout << copy[i] << " ";
        }
        cout << copy[copy.size() - 1];
        cout << endl;
    }
}