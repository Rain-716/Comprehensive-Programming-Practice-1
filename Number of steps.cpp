#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    static vector <long long> a(50);
    a[0]=1,a[1]=2,a[2]=4,a[3]=8;
    for (int i=4;i<50;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
    }
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n;
        cin>>n;
        cout<<"case #"<<i<<":\n";
        cout<<a[n-1]<<'\n';
    }
    return 0;
}