#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    cin.ignore();
    for (int i=0;i<T;i++){
        string s;
        getline(cin,s);
        int a=0,b=0,c=0,d=0,e=0;
        for (char& ch : s){
            if (ch>='A'&&ch<='Z'){
                a++;
            }
            else if (ch>='a'&&ch<='z'){
                b++;
            }
            else if (ch==' '){
                c++;
            }
            else if (isdigit(ch)){
                d++;
            }
            else {
                e++;
            }
        }
        cout<<"case #"<<i<<":\n";
        cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
    }
    return 0;
}