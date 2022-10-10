// Problem: B2031 计算三角形面积
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2031
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//海伦公式
	double a1,b1,a2,b2,a3,b3;
	scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&a2,&b2,&a3,&b3);
	double a=sqrt(pow(abs(a1-a2),2)+pow(abs(b1-b2),2)),b=sqrt(pow(abs(a1-a3),2)+pow(abs(b1-b3),2)),c=sqrt(pow(abs(a3-a2),2)+pow(abs(b3-b2),2));
	double p=(a+b+c)/2;
	printf("%.2lf",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}