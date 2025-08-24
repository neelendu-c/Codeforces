#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int k; cin>>k;
    int arr[n+1];
    int win=0;

    for (int i = 0; i < n+1; i++)
    {
        cin>>arr[i+1];
    }
    
    for (int i = 1; i < n+1; i++)
    {
        if (arr[i] >= arr[k] && arr[i]>0)
        {
            win++;
        }
    }
    cout<<win;
}