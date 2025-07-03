#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int i;
    cin>>i;
    string s;
    s.reserve(1<<i);
    s.push_back('0');
    while (i--){
        int n=s.size();
        for (char& c : s){
            s.push_back(c=='0' ? '1' : '0');
        }
    }
    cout<<s<<'\n';
    return 0;
}