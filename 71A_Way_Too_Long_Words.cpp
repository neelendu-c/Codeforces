#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        string st; cin>>st;
        if (st.length() > 10)
        {
            cout<<st[0]<<st.length() - 2<<st[st.length()-1];
        }
        else
        {
            cout<<st;
        }
        cout<<endl;
    }
    return 0;
}