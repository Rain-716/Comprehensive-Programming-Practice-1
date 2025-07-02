#include <bits/stdc++.h>
using namespace std;
int CountDigits(string& s)
{
    int cnt=0;
    for (char& c : s){
        cnt+=isdigit(c);
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    vector <string> a(n);
    cin.ignore();
    for (string& s : a){
        getline(cin,s);
    }
    sort(a.begin(),a.end(),[](string& a,string& b)
    {
        int aNum=CountDigits(a);
        int bNum=CountDigits(b);
        if (aNum!=bNum){
            return aNum<bNum;
        }
        if (a.length()!=b.length()){
            return a.length()>b.length();
        }
        return a<b;
    });
    for (string& s : a){
        cout<<s<<'\n';
    }
    return 0;
}