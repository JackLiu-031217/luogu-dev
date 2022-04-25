// Problem: P1025 [NOIP2001 提高组] 数的划分
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1025
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/74591097 头昏交错题了
//https://www.luogu.com.cn/record/74591103

#include<iostream>
using namespace std;
int k,t[7],n,ans;
void dfs(int kk,int r,int l){
    /*
    200 6
    4132096
    */
    if(kk!=k){
        for(int i=l;i<=r;i++){
            t[kk]=i;
            dfs(kk+1,r-i,i);
        }
    }else if(kk==k){
        t[kk]=r;
        if(t[kk]<t[kk-1]){
            return;
        }
        ans++;
    }
    return;
}
int main(){
    cin>>n>>k;
    dfs(1,n,1);
    cout<<ans<<endl;
}