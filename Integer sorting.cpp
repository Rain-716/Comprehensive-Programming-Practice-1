#include <bits/stdc++.h>
using namespace std;
struct Num
{
    int num,len;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    vector <Num> a;
    int x;
    while (cin>>x){
        a.push_back({x,(int)to_string(abs(x)).length()});
    }
    sort(a.begin(),a.end(),[](const Num& a,const Num& b)
    {
        if (a.len!=b.len){
            return a.len>b.len;
        }
        return a.num<b.num;
    });
    for (Num& i : a){
        cout<<i.num<<' ';
    }
    cout<<'\n';
    return 0;
}