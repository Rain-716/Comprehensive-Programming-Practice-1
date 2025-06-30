#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    for (int k=0;k<T;k++){
        string s;
        cin>>s;
        unordered_set <char> us(s.begin(),s.end());
        int b=max(2,(int)us.size());
        unordered_map <char,int> um(b);
        um[s[0]]=1;
        int i=1;
        long long sum=1;
        while (i<s.size()){
            if (s[i]==s[0]){
                sum=sum*b+1;
                i++;
            }
            else{
                um[s[i++]]=0;
                sum*=b;
                break;
            }
        }
        int j=2;
        while (i<s.size()){
            if (!um.count(s[i])){
                um[s[i]]=j++;
            }
            sum=sum*b+um[s[i++]];
        }
        cout<<"case #"<<k<<":\n"<<sum<<'\n';
    }
    return 0;
}