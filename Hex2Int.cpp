#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    int sum=0;
    for (char c : s){
        int d;
        if (isdigit(c)){
            d=c-'0';
        }
        else {
            d=toupper(c)-'A'+10;
        }
        sum=sum*16+d;
    }
    cout<<sum<<'\n';
    return 0;
}