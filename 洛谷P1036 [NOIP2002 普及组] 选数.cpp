// Problem: P1036 [NOIP2002 普及组] 选数
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1036
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
using namespace std;
int n,k,nn[21],nnn[21],ans;
bool b[21];
void dfs(int s,int l){
    if(s>k){
        int a=0;
        for(int i=1;i<=k;i++){
            a+=nnn[i];
        }
        for(int i=2;i<sqrt(a);i++){
            if(a%i==0){
                return;
            }
        }
        ans++;
        return;
    }
    for(int i=l;i<=n;i++){
        if(b[i]==0){
            b[i]=1;
            nnn[s]=nn[i];
            dfs(s+1,i+1);
            b[i]=0;
        }
    }
    return;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>nn[i];
    }
    dfs(1,1);
    cout<<ans<<endl;
}