#include <bits/stdc++.h>
using namespace std;
static const vector <int> primes{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
vector<int> read()
{
    string s,num;
    cin>>s;
    stringstream ss(s);
    vector <int> res;
    while (getline(ss,num,',')){
        res.push_back(stoi(num));
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    for (int t=0;t<T;t++){
        vector <int> a=read();
        vector <int> b=read();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int Max=max(a.size(),b.size())+1;
        a.resize(Max,0);
        b.resize(Max,0);
        int curry=0;
        vector <int> res(Max);
        for (int i=0;i<Max;i++){
            int sum=a[i]+b[i]+curry;
            res[i]=sum%primes[i];
            curry=sum/primes[i];
        }
        reverse(res.begin(),res.end());
        int i=0;
        while (!res[i]){
            i++;
        }
        cout<<"case #"<<t<<":\n";
        for (;i<Max-1;i++){
            cout<<res[i]<<',';
        }
        cout<<res[Max-1]<<'\n';
    }
    return 0;
}