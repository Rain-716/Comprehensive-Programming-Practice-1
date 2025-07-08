#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    while (cin>>n){
        vector <vector<int>> a(n,vector<int>(n,0));
        int i=n-1,j=n/2;
        for (int k=1;k<=n*n;k++){
            a[i][j]=k;
            i=(i+1)%n;
            j=(j-1+n)%n;
            if (a[i][j]||(i==0&&j==n-1)){
                i=(i-2+n)%n;
                j=(j+1)%n;
            }
        }
        for (vector<int>& i : a){
            for (int& j : i){
                cout<<j<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}