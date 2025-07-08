#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    sort(s.begin(),s.end(),[](char a,char b)
    {
        char aUpper=toupper(a);
        char bUpper=toupper(b);
        if (aUpper!=bUpper){
            return aUpper<bUpper;
        }
        return a>b;
    });
    cout<<s<<'\n';
    return 0;
}