// Problem: P1534 不高兴的津津（升级版）
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1534
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	int n,u[3001],ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		if(i==1){
			u[i]=a+b-8;
		}else u[i]=u[i-1]+a+b-8;
		ans+=u[i];
	}
	printf("%d\n",ans);
	return 0;
}