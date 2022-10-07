// Problem: B2030 计算线段长度
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2030
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
#include<cstdio>
int main(){
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("%.3lf",sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2)));
	return 0;
}