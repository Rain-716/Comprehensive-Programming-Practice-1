#include <bits/stdc++.h>
using namespace std;
int w,h;
vector <vector<bool>> a;
const vector <int> dx{-1,1,0,0,-1,-1,1,1};
const vector <int> dy{0,0,-1,1,-1,1,-1,1};
void Dfs(int i,int j)
{
    if (i<0||i>=h||j<0||j>=w||!a[i][j]){
        return;
    }
    a[i][j]=0;
    for (int k=0;k<8;k++){
        Dfs(i+dx[k],j+dy[k]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    while (cin>>w>>h){
        a.assign(h,vector<bool>(w,0));
        for (int i=0;i<h;i++){
            for (int j=0;j<w;j++){
                char c;
                cin>>c;
                a[i][j]=(c=='*');
            }
        }
        int cnt=0;
        for (int i=0;i<h;i++){
            for (int j=0;j<w;j++){
                if (a[i][j]){
                    cnt++;
                    Dfs(i,j);
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}