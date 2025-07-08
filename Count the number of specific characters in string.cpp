#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    getline(cin,s);
    int cnt=count_if(s.begin(),s.end(),[](char c)
    {
        return isdigit(c);
    });
    cout<<cnt<<'\n';
    return 0;
}