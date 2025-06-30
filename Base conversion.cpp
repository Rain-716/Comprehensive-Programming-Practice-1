#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int R;
    long long a=0,b=0,c=0;
    string s,r,t;
    cin>>R>>s;
    if (s[0]=='-'){
        cout<<'-';
        s.erase(0,1);
    }
    int pos=s.find('.');
    r=s.substr(0,pos);
    t=s.substr(pos+1);
    for (char& c : r){
        int d=(isdigit(c) ? c-'0' : c-'A'+10);
        a=a*R+d;
    }
    if (pos==-1){
        cout<<a<<'\n';
        return 0;
    }
    for (char c : t){
        int d=(isdigit(c) ? c-'0' : c-'A'+10);
        b=b*R+d;
    }
    c=pow(R,t.length());
    long long g=gcd(b,c);
    b/=g;c/=g;
    if (a){
        cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    else {
        cout<<b<<' '<<c<<'\n';
    }
    return 0;
}