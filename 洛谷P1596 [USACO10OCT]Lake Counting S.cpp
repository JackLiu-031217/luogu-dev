//P1596 [USACO10OCT]Lake Counting S
//https://www.luogu.com.cn/problem/P1596
//https://www.luogu.com.cn/record/76005164

#include<iostream>
using namespace std;
char g[101][101];
int n,m,ans=0;
void dfs(int x,int y){
    if(x<1||x>n||y<0||y>m){
        return;
    }
    g[x][y]='.';
    for(int i=-1;i<=1;i++){
        for(int o=-1;o<=1;o++){
            if(g[x+i][y+o]=='W'){
                dfs(x+i,y+o);
            }
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=m;o++){
            cin>>g[i][o];
        }
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=m;o++){
            if(g[i][o]=='W'){
                dfs(i,o);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}