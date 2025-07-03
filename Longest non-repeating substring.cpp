#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    int start=0,length=0,bestStart=0,bestLength=0;
    unordered_map <char,int> um;
    for (char c='0';c<='9';c++){
        um[c]=-1;
    }
    for (char c='A';c<='Z';c++){
        um[c]=-1;
    }
    for (char c='a';c<='z';c++){
        um[c]=-1;
    }
    for (int i=0;i<s.length();i++){
        char c=s[i];
        if (um[c]>=start){
            if (length>bestLength){
                bestStart=start;
                bestLength=length;
            }
            start=um[c]+1;
            length=i-um[c];
        }
        else {
            length++;
        }
        um[c]=i;
    }
    if (length>bestLength){
        bestStart=start;
        bestLength=length;
    }
    cout<<s.substr(bestStart,bestLength)<<'\n';
    return 0;
}