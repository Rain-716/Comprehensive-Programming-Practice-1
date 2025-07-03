#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    int a=0,b=0,c=0,d=0;
    while (getline(cin,s)){
        a+=s.length();
        c++;
        d=max(d,(int)s.length());
        for (char& c : s){
            if (c>='A'&&c<='Z'){
                b++;
            }
        }
    }
    cout<<a<<','<<b<<','<<c<<','<<d<<'\n';
    return 0;
}