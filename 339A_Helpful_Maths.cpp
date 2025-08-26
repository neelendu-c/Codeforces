#include <bits/stdc++.h>
using namespace std;

int main()
{

    string sum;
    cin >> sum;
    int val;
    vector<int> arr;

    for (int i = 0; i < (sum.length() + 1) / 2; i++)
    {
        val = sum[2 * i] - 48;
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < (sum.length() + 1) / 2; i++)
    {
        cout << arr[i];
        if (i == (sum.length() - 1) / 2)
        {
            break;
        }
        else
        {
            cout << "+";
        }
    }
}