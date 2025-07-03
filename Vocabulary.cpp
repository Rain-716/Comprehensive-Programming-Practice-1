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
        set <string> se;
        string line,word;
        getline(cin,line);
        for (char& c : line){
            if (isalpha(c)){
                word.push_back(c);
            }
            else if (!word.empty()){
                se.insert(word);
                word.clear();
            }
        }
        if (!word.empty()){
            se.insert(word);
        }
        cout<<"case #"<<i<<":\n";
        for (auto it=se.begin();it!=se.end();it++){
            cout<<*it<<' ';
        }
        cout<<'\n';
    }
    return 0;
}