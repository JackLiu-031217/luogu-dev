// Problem: P1208 [USACO1.3]混合牛奶 Mixing Milk
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1208
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/60180260

#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	int dan;
	long long int nn;
}nm[2000001]; //...
bool cmp(a o,a p){
	if(o.dan!=p.dan) return o.dan<p.dan;
	return o.nn>p.nn;
};
int main(){
	long long int n;
	int m;
	cin>>n;
	if(n==0){
		cout<<"0"<<endl;
		return 0;
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>nm[i].dan>>nm[i].nn;
	}
	sort(nm+1,nm+1+n,cmp);
	int x=1;
	long long int ans=0;
	while(n){
		if(nm[x].nn!=0){
			nm[x].nn--;
			ans+=nm[x].dan;
			n--;
		}else x++;
	}
	cout<<ans;
}