#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int i;
    cin>>i;
    int n=1<<i;
    string s;
    s.resize(n);
    for (int j=0;j<n;j++){
        s[j]=__builtin_parity(j)+'0';
    }
    cout<<s<<'\n';
    return 0;
}