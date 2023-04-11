// Problem: P6206 [USACO06OCT] Another Cow Number Game G
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P6206
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int ans=0;
    while(n!=1){
        if(n%2){
            n*=3;
            n++;
        }else n/=2;
        ans++;
    }
    printf("%lld\n",ans);
    return 0;
}
