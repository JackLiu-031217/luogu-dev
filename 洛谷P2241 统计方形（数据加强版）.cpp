// Problem: P2241 统计方形（数据加强版）
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2241
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/95107674

#include<iostream>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	long long int z=0,c;
	for(long long int i=1;i<=min(n,m);i++){
		z+=(n-i+1)*(m-i+1);
	}
	long long int xxd=0,yxd=0;
	for(long long int i=1;i<=n;i++){
		xxd+=n-i+1;
	}
	for(long long int i=1;i<=m;i++){
		yxd+=m-i+1;
	}
	c=xxd*yxd-z;
	printf("%lld %lld\n",z,c);
	return 0;
}