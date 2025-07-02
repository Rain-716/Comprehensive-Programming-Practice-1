#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector <int> inter(m);
    for (int& i : inter){
        cin>>i;
    }
    sort(inter.begin(),inter.end());
    n--;
    while (n--){
        cin>>m;
        vector <int> a(m);
        for (int& i : a){
            cin>>i;
        }
        sort(a.begin(),a.end());
        vector <int> interNew;
        interNew.reserve(min(inter.size(),a.size()));
        set_intersection(inter.begin(),inter.end(),a.begin(), a.end(),back_inserter(interNew));
        inter.swap(interNew);
        if (inter.empty()){
            break;
        }
    }
    for (int& i : inter){
        cout<<i<<' ';
    }
    cout<<'\n';
    return 0;
}