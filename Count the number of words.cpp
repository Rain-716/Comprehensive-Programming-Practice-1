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
        string line,word;
        getline(cin,line);
        istringstream iss(line);
        int cnt=0;
        while (iss>>word){
            transform(word.begin(),word.end(),word.begin(),[](unsigned char c){ return tolower(c); });
            if (word!="the"&&word!="a"&&word!="an"&&word!="of"&&word!="for"&&word!="and"){
                cnt++;
            }
        }
        cout<<"case #"<<i<<":\n";
        cout<<cnt<<'\n';
    }
    return 0;
}