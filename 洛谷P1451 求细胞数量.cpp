//P1451 求细胞数量
//https://www.luogu.com.cn/problem/P1451
//https://www.luogu.com.cn/record/76268333
#include<iostream>
using namespace std;
char cel[101][101];
int y,x,ans,ym[4]={-1,0,1,0},xm[4]={0,1,0,-1};
void dfs(int yyy,int xxx){
    if(yyy<1||yyy>y||xxx<1||xxx>x) return;
    cel[yyy][xxx]='0';
    for(int i=0;i<4;i++){
        if(cel[yyy+ym[i]][xxx+xm[i]]!='0'){
            dfs(yyy+ym[i],xxx+xm[i]);
        }
    }
    return;
}
int main(){
    cin>>y>>x;
    for(int i=1;i<=y;i++){
        for(int o=1;o<=x;o++){
            cin>>cel[i][o];
        }
    }
    for(int i=1;i<=y;i++){
        for(int o=1;o<=x;o++){
            if(cel[i][o]!='0'){
                dfs(i,o);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}