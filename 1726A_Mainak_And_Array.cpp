#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
void neel(){
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}


signed main() {
    neel();
    
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        int arr[n];
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

        for(int i=0; i<n; i++){

            maxi=max(arr[i]-arr[0],maxi);
            maxi=max(arr[n-1]-arr[i],maxi);
            
            if(i<n-1){
                maxi=max(arr[i]-arr[i+1],maxi);
            }
        }

        cout<<maxi<<endl;
        
        
    }

}