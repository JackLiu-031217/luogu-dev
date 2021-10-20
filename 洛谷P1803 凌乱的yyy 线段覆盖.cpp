// Problem: P1803 凌乱的yyy / 线段覆盖
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1803
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	long long int a,b;
}oi[1000010];
bool cmp(a i,a o){
	if(i.b!=o.b) return i.b<o.b;
	return i.a<o.a;
}
int main(){
	long long int n,ans=0;
	cin>>n;
	for(long long int i=1;i<=n;i++){
		cin>>oi[i].a>>oi[i].b;
	}
	sort(oi+1,oi+1+n,cmp);
	int s=0;
	for(long long int i=1;i<=n;i++){
		if(oi[i].a>=s){
			ans++;
			s=oi[i].b;
		}
	}
	cout<<ans<<endl;
	return 0;
}