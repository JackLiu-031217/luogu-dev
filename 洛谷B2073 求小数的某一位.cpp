// Problem: B2073 求小数的某一位
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2073
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
#include<cmath>
int main(){
	/*  一个会百分之百溢出 double 数据范围的做法
		double a,b;
		int n;
		scanf("%lf%lf%d",&a,&b,&n);
		if(a==b&&a==0){
			printf("0\n");
			return 0;
		}
		double x=a/b;
		int ans=x*pow(10,n);
		printf("%d",ans%10);
	*/
	
	//https://www.luogu.com.cn/blog/Bobby050206/b2073-qiu-xiao-shuo-di-mou-yi-wei
	int a,b;
	int n;
	scanf("%d%d%d",&a,&b,&n);
	if(a==b&&a==0){
		printf("0\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		a%=b;
		a*=10;
	}
	int ans=a/b;
	printf("%d",ans);
	return 0;
}