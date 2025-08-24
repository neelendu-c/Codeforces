#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t; //Nmber of test cases
    int val;

    for (int q = 0; q < t; q++)
    {
        int n; cin>>n; // No. of villagers
        vector<int> arr;
        long long emcount=0;
        for (int i = 0; i < n; i++)
        {
            cin>>val;
            arr.push_back(val);
        }

        sort(arr.begin(),arr.end());
 
        for (int i = 0; i < (n/2)+1; i++)
        {
            val=arr[n-1];
            arr[n-1]=0;
            arr[n-2]=0;
            sort(arr.begin(),arr.end());
            emcount=emcount+val;

            if (i==n/2)
            {
                emcount=emcount+arr[i];
            }
        }
        cout<<emcount<<endl;
    }
}