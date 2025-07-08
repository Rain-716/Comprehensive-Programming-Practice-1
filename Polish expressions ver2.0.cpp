#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    cin.ignore();
    vector <string> vec;
    stack <double> num;
    for (int i=0;i<T;i++){
        string line,temp;
        getline(cin,line);
        istringstream iss(line);
        while (iss>>temp){
            vec.push_back(temp);
        }
        for (auto it=vec.rbegin();it!=vec.rend();it++){
            string& s=*it;
            if (s=="+"||s=="-"||s=="*"||s=="/"){
                double num1=num.top();
                num.pop();
                double num2=num.top();
                num.pop();
                double res;
                switch (s[0]){
                    case '+': res=num1+num2; break;
                    case '-': res=num1-num2; break;
                    case '*': res=num1*num2; break;
                    case '/': res=num1/num2; break;
                }
                num.push(res);
            }
            else {
                num.push(stod(s));
            }
        }
        cout<<"case #"<<i<<":\n";
        cout<<fixed<<setprecision(6)<<num.top()<<'\n';
        vec.clear();
        num.pop();
    }
    return 0;
}