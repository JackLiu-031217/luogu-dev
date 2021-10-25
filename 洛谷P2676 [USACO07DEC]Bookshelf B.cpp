// Problem: P2676 [USACO07DEC]Bookshelf B
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2676
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/60913760
//https://www.luogu.com.cn/record/60913943
//https://www.luogu.com.cn/record/60914043

#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int h[20010];
int main(){
	int n;
	long long int b;
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	sort(h,h+n,cmp);
	long int s=0;
	int cnt=0,ans=0;
	while(s<b){
		s+=h[cnt];
		ans++;
		cnt++;
	}
	cout<<ans<<endl;
	return 0;
}