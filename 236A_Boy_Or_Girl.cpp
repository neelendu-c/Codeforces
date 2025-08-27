#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    cin >> name;
    int n = name.length();
    bool inthere = false;
    string unique = " ";
    int repcount = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < unique.length(); j++)
        {
            if (unique[j] == name[i])
            {
                inthere = true;
            }
        }

        if (inthere)
        {
            repcount++;
        }
        else
        {
            unique += name[i];
        }
        inthere = false;
    }
    if ((n - repcount) % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}