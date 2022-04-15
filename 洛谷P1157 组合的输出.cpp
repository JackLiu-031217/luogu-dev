// Problem: P1157 组合的输出
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1157
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<iomanip>
using namespace std;
int n,r,s[22];
bool ss[22];
void dfs(int o){
    if(o>r){
        for(int i=1;i<=r;i++){
            cout<<setw(3)<<s[i];
        }
        cout<<endl;
        return;
    }
    for(int i=s[o-1]+1;i<=n;i++){
        if(ss[i]==0){
          ss[i]=1;
          s[o]=i;
          dfs(o+1);
          ss[i]=0;
        }
    }
    return;
}
int main(){
    cin>>n>>r;
    dfs(1);
    return 0;
}