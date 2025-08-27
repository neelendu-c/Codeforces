#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    int a; cin>>a;
    int b; cin>>b;
    int year=0;

    while (a<=b)
    {
        year++;
        a=a*3;
        b=b*2;
    }
    
    cout<<year;
    
 
}