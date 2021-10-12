// Problem: P1181 数列分段 Section I
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1181
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59731842

#include<iostream>
using namespace std;
int main(){
	int n,m,ans=1;
	cin>>n>>m;
	int o[100001];
	for(int i=0;i<n;i++){
		cin>>o[i];
	}
	int p=0;
	for(int i=0;i<n;i++){
		if(p+o[i]>m){
			p=o[i];
			ans++;
		}else p+=o[i];
	}
	cout<<ans<<endl;
	return 0;
}