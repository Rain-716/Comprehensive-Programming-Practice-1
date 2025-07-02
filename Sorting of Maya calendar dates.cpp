#include <bits/stdc++.h>
using namespace std;
struct Date
{
    int y,m,d;
};
static const unordered_map <string,int> monthMap={{"pop",0},{"no",1},{"zip",2},{"zotz",3},{"tzec",4},{"xul",5},{"yoxkin",6},{"mol",7},{"chen",8},{"yax",9},{"zac",10},{"ceh",11},{"mac",12},{"kankin",13},{"muan",14},{"pax",15},{"koyab",16},{"cumhu",17},{"uayet",18}};
static const vector <string> monthName={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int N;
        cin>>N;
        vector <Date> a(N);
        for (Date& d : a){
            string mon;
            cin>>d.d;
            cin.ignore();
            cin>>mon>>d.y;
            d.m=monthMap.at(mon);
        }
        sort(a.begin(),a.end(),[](Date& a,Date& b)
        {
            return tie(a.y,a.m,a.d)<tie(b.y,b.m,b.d);
        });
        cout<<"case #"<<i<<":\n";
        for (Date& d : a){
            cout<<d.d<<". "<<monthName[d.m]<<' '<<d.y<<'\n';
        }
    }
    return 0;
}