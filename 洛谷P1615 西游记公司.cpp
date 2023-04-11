// Problem: P1615 西游记公司
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1615
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
	int h1,m1,s1,h2,m2,s2,n;
	scanf("%d:%d:%d",&h1,&m1,&s1);
	scanf("%d:%d:%d",&h2,&m2,&s2);
	if(h2<h1){
		h2+=24;
	}
	scanf("%d",&n);
	long long int a=h1*3600+m1*60+s1;
	long long int b=h2*3600+m2*60+s2;
	printf("%lld",(b-a)*n); //十年OI一场空,不开long long见祖宗
	return 0;
}