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
        vector<int> a;
        int val = 0;
        vector<int> b;
        vector<int> c;
        int max = 0;
        int mcount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            a.push_back(val);
            if (max < val)
            {
                max = val;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == max)
            {
                mcount++;
            }
        }

        sort(a.begin(), a.end());

        map<int, int> fmap;
        for (int i = 0; i < n; i++)
        {
            fmap[a[i]]++;
        }

        if (fmap.size() > 1)
        {

            for (int i = 0; i < a.size() - mcount; i++)
            {
                b.push_back(a[i]);
            }

            for (int i = 0; i < mcount; i++)
            {
                c.push_back(max);
            }

            cout << b.size() << " " << c.size() << endl;

            for (int i = 0; i < a.size() - mcount; i++)
            {
                cout << b[i] << " ";
            }

            cout << endl;

            for (int i = 0; i < mcount; i++)
            {
                cout << max << " ";
            }

            if (z != t - 1)
            {
                cout << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}