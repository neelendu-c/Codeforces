#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int sum;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                sum=abs(3-i-1)+abs(3-j-1);
                break;
            }
        }
    }
    cout<<sum;
}