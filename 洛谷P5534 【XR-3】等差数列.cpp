// Problem: P5534 【XR-3】等差数列
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P5534
// Memory Limit: 250 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
    long long int a,b,ans=0,c;
    cin>>a>>b>>c;
    long long int d=b-a;
    for(long long int i=0;i<c;i++){
        ans+=a+(d*i);
    }
    cout<<ans<<endl;
}