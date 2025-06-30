#include <bits/stdc++.h>
using namespace std;
int Count(unsigned char c)
{
    int cnt=0;
    while (c){
        cnt+=(c&1);
        c>>=1;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    cin.ignore();
    while (n--){
        string s;
        getline(cin,s);
        int cnt=0;
        for (char& c : s){
            cnt+=Count(c);
        }
        int sum=8*s.length();
        int g=gcd(cnt,sum);
        cout<<cnt/g<<'/'<<sum/g<<'\n';
    }
    return 0;
}