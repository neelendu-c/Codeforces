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

        if (pc >= nc && nc % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (pc>=nc && nc%2==0)
        {
            cout << 1 << endl;   
        }
        else if (pc<nc && nc%2==0)
        {
            cout << 2 * ceil((nc-pc)/2)<<endl;
        }
        else if (pc<nc && nc%2==1)
        {
            cout << 2 * ceil((nc-pc)/2) - 1 <<endl;
        }

    }
}