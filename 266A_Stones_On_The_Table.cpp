#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string color;
    cin >> color;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (color[i - 1] == color[i] && i != 0)
        {
            color.erase(i - 1, 1);
            i = 0;
            count++;
            n = color.length();
        }
    }

    cout << count << endl;
}