// Problem: B2035 判断数正负
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2035
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
	int a;
	scanf("%d",&a);
	if(a>0){
		printf("positive\n");
	}else if(a<0){
		printf("negative\n");
	}else{
		printf("zero\n");
	}
	return 0;
}