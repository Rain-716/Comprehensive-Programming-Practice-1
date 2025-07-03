#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    int Max=1,l=1;
    for (int i=1;i<s.length();i++){
        l=(s[i]==s[i-1] ? 1 : l+1);
        Max=max(Max,l);
    }
    cout<<Max<<'\n';
    return 0;
}