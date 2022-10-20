// Problem: B2064 斐波那契数列
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2064
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
int main(){
	int a,b;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		int p;
		scanf("%d",&p);
		if(p==1||p==2){
			printf("%d\n",1);
			continue;
		}
		int aa=1,bb=2,cc=3;
		while(cc!=p){
			int tmp=aa;
			aa=bb;
			bb+=tmp;
			cc++;
		}
		printf("%d\n",bb);
	}
	return 0;
}