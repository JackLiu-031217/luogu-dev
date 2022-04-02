// Problem: P4715 【深基16.例1】淘汰赛
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4715
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/72945728

#include<iostream>
using namespace std;
int main(){
    int n,tr[129];
    cin>>n;
    int t=1;
    for(int i=1;i<=n;i++){
        t*=2;
    }
    int h=t/2;
    for(int i=1;i<=t;i++){
        cin>>tr[i];
    }
    int lm=-129,rm=-129,lmn,rmn;
    for(int i=1;i<=h;i++){
        if(tr[i]>lm){
            lm=tr[i];
            lmn=i;
        }
    }
    for(int i=h+1;i<=t;i++){
        if(tr[i]>rm){
            rm=tr[i];
            rmn=i;
        }
    }
    if(lm>rm){
        cout<<rmn<<endl;
    }else cout<<lmn<<endl;
    return 0;
}