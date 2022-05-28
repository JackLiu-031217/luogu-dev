// Problem: P1434 [SHOI2002]滑雪
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1434
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76515894

#include<iostream>
using namespace std;
int s[101][101];
bool n[101][101];
int ans[101][101],anss;
int ay[4]={-1,0,1,0},by[4]={0,1,0,-1};
int a,b;
void search(int y,int x,int aa,int bb,int c){
    if(y<1||y>a||x<1||x>b){
        return;
    }
    if(ans[y][x]!=0){
        c+=ans[y][x]-1;
        ans[aa][bb]=max(ans[aa][bb],c);
        return;
    }
    ans[aa][bb]=max(ans[aa][bb],c);
    n[y][x]=1;
    for(int i=0;i<4;i++){
        if(s[y+ay[i]][x+by[i]]<s[y][x]&&n[y+ay[i]][x+by[i]]==0){
            search(y+ay[i],x+by[i],aa,bb,c+1);
        }
    }
    n[y][x]=0;
    return;
}
int main(){
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int o=1;o<=b;o++){
            cin>>s[i][o];
        }
    }
    for(int i=1;i<=a;i++){
        for(int o=1;o<=b;o++){
            if(ans[i][o]==0)
                search(i,o,i,o,1);
            anss=max(anss,ans[i][o]);
        }
    }
    cout<<anss<<endl;
}