#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    cin >> k;
    int n;
    cin >> n;
    int w;
    cin >> w;
    cout<<max(0,(w * ((w * k) + k)) / 2 - n);
}