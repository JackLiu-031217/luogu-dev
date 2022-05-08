//P1605 迷宫
//https://www.luogu.com.cn/problem/P1605

//https://www.luogu.com.cn/record/75331442
//错误原因: 22行坐标转换参数错误导致无限递归
//(wlk(x+mx[i],y+mx[i]) --> wlk(x+mx[i],y+my[i]))

//https://www.luogu.com.cn/record/75345902

#include<iostream>
using namespace std;
int n,m,t,fx,fy,mx[4]={-1,1,0,0},my[4]={0,0,-1,1},ans;
bool mr[6][6],mz[6][6];
void wlk(int x,int y){
    if(x==fx&&y==fy){
        ans++;
        return;
    }
    for(int i=0;i<=3;i++){
        if(mr[x+mx[i]][y+my[i]]==0&&mz[x+mx[i]][y+my[i]]==0&&x+mx[i]>0&&x+mx[i]<=n&&y+my[i]>0&&y+my[i]<=m){
            mr[x][y]=1;
            wlk(x+mx[i],y+my[i]);
            mr[x][y]=0;
        }
    }
    return;
}
int main(){
    cin>>n>>m>>t;
    int sx,sy;
    cin>>sx>>sy>>fx>>fy;
    for(int i=1;i<=t;i++){
        int x,y;
        cin>>x>>y;
        mz[x][y]=1;
    }
    wlk(sx,sy);
    cout<<ans<<endl;
    return 0;
}