// Problem: P1162 填涂颜色
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1162
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76309020
//https://www.luogu.com.cn/record/76307961

#include<iostream>
using namespace std;
int hy[4]={-1,0,1,0},ly[4]={0,1,0,-1},n,f[31][31];
bool fz[31][31];
void dfs(int y,int x){
    if(x<0||x>n+1||y<0||y>n+1){
        return;
    }
    fz[y][x]=1;
    //cerr<<"fz["<<y<<"]["<<x<<"]="<<fz[y][x]<<endl;
    for(int i=0;i<4;i++){
        if(f[y+hy[i]][x+ly[i]]==0&&fz[y+hy[i]][x+ly[i]]==0){
            dfs(y+hy[i],x+ly[i]);
        }
    }
    return;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            cin>>f[i][o];
        }
    }
    dfs(0,0);
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            if(fz[i][o]){
                cout<<"0 ";
            }else{
                if(f[i][o]==0){
                    cout<<"2 ";
                }else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}