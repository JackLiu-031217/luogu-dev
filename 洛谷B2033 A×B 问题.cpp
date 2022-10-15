// Problem: B2033 A*B 问题
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2033
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	long long int a,b; //2.5*10^9明显超出int极限，必须用long long int
	cin>>a>>b;
	cout<<a*b<<endl;
	return 0;
}