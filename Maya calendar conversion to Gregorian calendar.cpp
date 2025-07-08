#include <bits/stdc++.h>
using namespace std;
unordered_map <string,int> mp {{"pop",0},{"no",1},{"zip",2},{"zotz",3},{"tzec",4},{"xul",5},{"yoxkin",6},{"mol",7},{"chen",8},{"yax",9},{"zac",10},{"ceh",11},{"mac",12},{"kankin",13},{"muan",14},{"pax",15},{"koyab",16},{"cumhu",17},{"uayet",18}};
struct day
{
    int d,m,y;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int N;
        cin>>N;
        vector <day> dates(N);
        for (day& a : dates){
            string temp;
            cin>>a.d;
            cin.ignore();
            cin>>temp;
            a.m=mp[temp];
            cin>>a.y;
        }
        sort(dates.begin(),dates.end(),[](day& d1,day& d2)
        {
            return tie(d1.y,d1.m,d1.d)<tie(d2.y,d2.m,d2.d);
        });
        cout<<"case #"<<i<<":\n";
        for (day& d : dates){
            cout<<d.y<<"-"<<setw(3)<<setfill('0')<<(d.m*20+d.d+1)<<'\n';
        }
    }
    return 0;
}