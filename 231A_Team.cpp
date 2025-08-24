#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; // Number of cases
    int count=0;
    int soln=0;
    int arr[3];

    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < 3; i++)
        {
            if (arr[i]==1)
            {
                count++;
            }
        }
        
        if (count>1)
        {
            soln++;
        }   
    }
    cout<<soln;
}