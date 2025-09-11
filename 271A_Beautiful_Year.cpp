#include <bits/stdc++.h>
using namespace std;

bool distinct(int year)
{
    bool unique = true;
    int digit;
    set<int> val;

    for (int i = 0; year > 0; i++)
    {
        if (val.count(year % 10))
        {
            unique = false;
            break;
        }

        val.insert(year % 10);
        year = year / 10;
    }

    return unique;
}

int main()
{

    int year;
    cin >> year;

    while (year++)
    {
        if (distinct(year))
        {
            cout << year;
            break;
        }
    }
}