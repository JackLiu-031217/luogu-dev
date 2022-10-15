// Problem: B2034 计算 2 的幂
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2034
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	int a=1;
	int b;
	cin>>b;
	cout<<(int)(a<<b)<<endl; //位运算符
	return 0;
}