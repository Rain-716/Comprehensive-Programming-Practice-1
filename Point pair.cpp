#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,sum=0;
    cin>>n;
    vector <int> a(n);
    for (int& i : a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    for (int i=0;i<n;i+=2){
        sum+=a[i+1]-a[i];
    }
    cout<<sum<<'\n';
    return 0;
}