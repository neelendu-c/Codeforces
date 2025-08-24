#include <bits/stdc++.h>
using namespace std;

int main(){

    int height; cin>>height;
    int width; cin>>width;

    if (height%2==0 && width%2==0)
    {
        cout<<(height/2)*width;
    }
    else if (height%2==0 && width%2!=0)
    {
        cout<<(height/2)*width;
    }
    else if (width%2==0 && height%2!=0)
    {
        cout<<(width/2)*height;
    }
    else if (width%2!=0 && height%2!=0)
    {
        cout<<((width*height) - 1)/2;
    }
}