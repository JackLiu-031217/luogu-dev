// Problem: P2084 进制转换
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2084
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	int n;
	string a;
	cin>>n>>a;
	for(long long int i=a.length()-1;i>=0;i--){
		if(a[a.length()-i-1]!='0'){
			printf("%c*%d^%d",a[a.length()-i-1],n,i);
			if(i!=0){
				printf("+");
			}else printf("\n");
		}
	}
	return 0;
}