#include <bits/stdc++.h>
using namespace std;
bool HasDig(string& s)
{
    for (char& c : s){
        if (isdigit(c)){
            return true;
        }
    }
    return false;
}
int GetNum(string& s)
{
    int i=0,j;
    for (;!isdigit(s[i]);i++){}
    for (j=i+1;j<s.size();j++){
        if (!isdigit(s[j])){
            break;
        }
    }
    return stoi(s.substr(i,j-i));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    vector <string> a;
    string s;
    while (cin>>s){
        a.push_back(s);
    }
    sort(a.begin(),a.end(),[](string& a,string& b)
    {
        bool aHas=HasDig(a),bHas=HasDig(b);
        if (!aHas&&!bHas){
            return a<b;
        }
        if (aHas!=bHas){
            return aHas<bHas;
        }
        int aNum=GetNum(a);
        int bNum=GetNum(b);
        if (aNum!=bNum){
            return aNum<bNum;
        }
        return a<b;
    });
    for (string& s : a){
        cout<<s<<' ';
    }
    cout<<'\n';
    return 0;
}