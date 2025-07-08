#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    vector <vector<int>> a(21,vector<int>(3));
    a[0]={1,0,0};
    for (int i=1;i<=20;i++){
        a[i]={a[i-1][0]+a[i-1][2],a[i-1][0]+a[i-1][1],a[i-1][1]};
    }
    int n;
    while (cin>>n&&n!=-1){
        cout<<a[n][0]+a[n][1]+a[n][2]<<'\n';
    }
    return 0;
}