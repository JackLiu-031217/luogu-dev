// Problem: P4445 [AHOI2018初中组]报名签到
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4445
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	unsigned long long int ans=0,n,a;
	cin>>n>>a;
	for(unsigned long long int i=1;i<n;i++){
		unsigned long long int b;
		cin>>b;
		ans+=max(a,b);
		a=b;
	}
	printf("%llu\n",ans);
	return 0;
}