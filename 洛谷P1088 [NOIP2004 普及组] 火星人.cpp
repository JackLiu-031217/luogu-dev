// Problem: P1088 [NOIP2004 普及组] 火星人
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1088
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int finger,pn;
	scanf("%d%d",&finger,&pn);
	int fn[finger+1];
	for(int i=1;i<=finger;i++){
		cin>>fn[i];
	}
	for(int i=1;i<=pn;i++){
		next_permutation(fn+1,fn+1+finger);
	}
	for(int i=1;i<=finger;i++){
		printf("%d",fn[i]);
		if(i!=finger){
			printf(" ");
		}else printf("\n");
	}
	return 0;
}