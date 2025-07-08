#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,sum=0;
    cin>>n;
    vector <int> weight(n);
    for (int& i : weight){
        cin>>i;
        sum+=i;
    }
    vector <bool> b(2*sum+1,false),bb(2*sum+1,false);
    b[sum]=true;
    for (int& w : weight){
        bb=b;
        for (int i=0;i<=2*sum;i++){
            if (b[i]){
                if (i+w<=2*sum){
                    bb[i+w]=true;
                }
                if (i-w>=0){
                    bb[i-w]=true;
                }
            }
        }
        b.swap(bb);
    }
    for (int i=1;i<=sum;i++){
        cout<<(b[sum-i]||b[sum+i]);
    }
    cout<<'\n';
    return 0;
}