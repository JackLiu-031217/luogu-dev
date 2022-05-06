//P1219 [USACO1.5]八皇后 Checker Challenge
//https://www.luogu.com.cn/problem/P1219
//https://www.luogu.com.cn/record/75231734
//https://www.luogu.com.cn/record/75249123
//https://www.luogu.com.cn/record/75249647

#include<iostream>
using namespace std;
int n,sum[14],r=0;
bool h[14],l[14],zx[26],yx[12];
//左斜线判断规则:行+列-1相等为一线
//右斜线判断规则:行-列+行宽相等为一线
void dfs(int s){
    if(s>n){
        r++;
        if(r<=3){
            for(int i=1;i<=n;i++){
                cout<<sum[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int i=1;i<=n;i++){
        //一通简单粗暴的深搜
        if(h[s]==0&&l[i]==0&&zx[i+s-1]==0&&yx[s-i+n]==0){
            h[s]=1;
            l[i]=1;
            zx[i+s-1]=1;
            yx[s-i+n]=1;
            if(r<=3){
                sum[s]=i;
            }
            dfs(s+1);
            h[s]=0;
            l[i]=0;
            zx[i+s-1]=0;
            yx[s-i+n]=0;
        }
    }
    return;
}
int main(){
    cin>>n;
    dfs(1);
    cout<<r<<endl;
    return 0;
}