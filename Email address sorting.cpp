#include <bits/stdc++.h>
using namespace std;
struct str
{
    string r,t;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    vector <str> a(n);
    for (str& s : a){
        string temp;
        cin>>temp;
        int i=temp.find('@');
        s.r=temp.substr(0,i);
        s.t=temp.substr(i+1);
    }
    sort(a.begin(),a.end(),[](str& a,str& b)
    {
        if (a.t!=b.t){
            return a.t<b.t;
        }
        return a.r>b.r;
    });
    for (str& s : a){
        cout<<s.r<<'@'<<s.t<<'\n';
    }
    return 0;
}