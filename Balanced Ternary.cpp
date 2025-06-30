#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    long long a=0,b=0,c;
    string s,r,t;
    cin>>s;
    int pos=s.find('.');
    r=s.substr(0,pos);
    for (char& c : r){
        int d=(c=='2' ? -1 : c-'0');
        a=a*3+d;
    }
    if (pos==-1){
        cout<<a<<'\n';
        return 0;
    }
    t=s.substr(pos+1);
    for (char c : t){
        int d=(c=='2' ? -1 : c-'0');
        b=b*3+d;
    }
    c=pow(3,t.length());
    long long g=gcd(b,c);
    b/=g;c/=g;
    if (!a){
        cout<<b<<' '<<c<<'\n';
        return 0;
    }
    if (a<0&&b<0){
        b=-b;
    }
    else {
        if (a<0){
            a++;
            b=c-b;
        }
        else if (b<0){
            a--;
            b+=c;
        }
    }
    if (a){
        cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    else {
        cout<<b<<' '<<c<<'\n';
    }
    return 0;
}