// Problem: B2032 等差数列末项计算
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2032
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	printf("%d",(b-a)*(n-1)+a);
	return 0;
}