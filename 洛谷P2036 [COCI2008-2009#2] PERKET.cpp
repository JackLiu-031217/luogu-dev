// Problem: P2036 [COCI2008-2009#2] PERKET
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2036
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76398713
//https://www.luogu.com.cn/record/76398728
//https://www.luogu.com.cn/record/76401350

#include<iostream>
#include<cstdlib>
using namespace std;
int s[11],k[11],n,ans=1000000000,sz=1,kz=0;
bool cf[11];
void dfs(int a){
    if(a>n){
        return;
    }
    for(int i=1;i<=n;i++){
        if(cf[i]==0){
            sz*=s[i];
            kz+=k[i];
            ans=min(ans,abs(sz-kz));
            cf[i]=1;
            dfs(i+1);
            cf[i]=0;
            sz/=s[i];
            kz-=k[i];
        }
    }
    return;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i]>>k[i];
    }
    dfs(1);
    cout<<ans<<endl;
    return 0;
}