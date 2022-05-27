// Problem: P1141 01迷宫
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1141
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76445253
//https://www.luogu.com.cn/record/76445253
//https://www.luogu.com.cn/record/76445869
//https://www.luogu.com.cn/record/76445926
//https://www.luogu.com.cn/record/76481227
//https://www.luogu.com.cn/record/76481294

#include<iostream>
#include<cstring>
using namespace std; 
int n,m,mx[4]={0,1,0,-1},my[4]={1,0,-1,0},ans[100005],anss[1005][1005];
char nn[1005][1005];
void dfs(int y,int x,int o){
    if(y<1||y>n||x<1||x>n){
        return;
    }
    anss[y][x]=o;
    ans[o]++;
    for(int i=0;i<4;i++){
        if(nn[y+my[i]][x+mx[i]]!=nn[y][x]&&anss[y+my[i]][x+mx[i]]==0){
            dfs(y+my[i],x+mx[i],o);
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            cin>>nn[i][o];
        }
    }
    for(int i=1;i<=m;i++){
        int y,x;
        cin>>y>>x;
        if(anss[y][x]!=0){
            ans[i]=ans[anss[y][x]];
        }else dfs(y,x,i);
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}