// Problem: B2029 大象喝水
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2029
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// https://www.luogu.com.cn/record/88862938

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	const double PI=3.1415926;
	const int water=20000; //升与立方厘米（ml）的进率是 1000。
						   //这个知识点现在居然要靠查才能想起来了，智商很捉急啊
	int h,r;
	scanf("%d%d",&h,&r);
	cout<<ceil(water/(r*r*PI*h))<<endl; //ceil: 定义于cmath/math.h，返回大于或者等于指定表达式的最小整数。
									   //和数学定义上的[x]差不多
	return 0;
}