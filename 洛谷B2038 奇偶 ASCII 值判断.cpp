// Problem: B2038 奇偶 ASCII 值判断
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2038
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
	char a;
	scanf("%c",&a);
	if(a%2){
		printf("YES\n");
	}else printf("NO\n");
	return 0;
}