#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n; //Number of operations
    int x=0; // x initialization

    for (int i = 0; i < n; i++) // Going thru operations
    {
        string op; cin>>op;
        for (int i = 0; i < op.length(); i++)
        {
            if (op[i] == '+' && op[i+1] == '+')
            {
                x++;
            }
            if (op[i] == '-' && op[i+1] == '-')
            {
                x--;
            }
            
        }
        
    }
    cout<<x;
}