#include <bits/stdc++.h>
using namespace std;


// WORK IN PROGRESS

int main()
{

    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int count=0;
        bool check=false;

        for (int i = 0; x.size() < s.size(); i++)
        {
            if (x.substr(i,x.size())==s)
            {
                cout<<count<<endl;
            }
            x=x+x;
            count++;
            
        }
        
        if (count ==0 || count>5)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        
        
        
    }
}