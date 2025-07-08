#include <bits/stdc++.h>
using namespace std;
unordered_map <char,int> a{{'-',0},{'[',1},{']',2}};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    int len=1,Max=1;
    for (int i=1;i<s.size();i++){
        len=(a[s[i]]!=(a[s[i-1]]+1)%3) ? 1 : len+1;
        Max=max(Max,len);
    }
    cout<<Max<<'\n';
    return 0;
}