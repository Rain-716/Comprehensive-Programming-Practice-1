#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s,pre="";
    cin>>s;
    for (int i=s.size()-1;i>=0;i--){
        string s1=s[i]+pre;
        string s2=string(2,s[i])+pre;
        pre=min(s1,s2);
    }
    cout<<pre<<'\n';
    return 0;
}