#include <bits/stdc++.h>
using namespace std;

int main()
{

    int dist;
    cin >> dist;
    int count = 0;
    int map = 0;

    while (map < dist)
    {
        if (dist >= 5)
        {
            count = count + (dist / 5);
            dist = dist - count * 5;
        }
        else
        {
            count++;
            dist = dist - (dist % 5);
        }
    }

    cout << count;
}