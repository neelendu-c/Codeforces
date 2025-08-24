#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t; // Number of test cases

    // y = Number of teeth of gear to left || x = Number of teeth || z = Speed of gear to left
    // Speed = yz/x 


    for (int p = 0; p < t; p++)
    {
        int n; cin>>n;
        int arr[n];
        bool boolcheck=false;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int l = i+1; l < n; l++)
            {
                if (arr[i]==arr[l])
                {
                    boolcheck=true;
                }
            }
        }
        if (boolcheck)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;  
    }

}