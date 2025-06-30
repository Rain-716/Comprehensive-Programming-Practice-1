#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int a,b,sum=0;
    string s,t;
    cin>>a>>s>>b;
    if (s=="0"){
        cout<<0<<'\n';
        return 0;
    }
    for (char& c : s){
        int d=isdigit(c) ? c-'0' : toupper(c)-'A'+10;
        sum=sum*a+d;
    }
    while (sum>0){
        int rem=sum%b;
        if (rem>=0&&rem<=9){
            t.push_back(rem+'0');
        }
        if (rem>=10&&rem<=15){
            t.push_back(rem-10+'A');
        }
        sum/=b;
    }
    reverse(t.begin(),t.end());
    cout<<t<<'\n';
    return 0;
}