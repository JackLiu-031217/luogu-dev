// Problem: P1104 生日
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1104
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59482387

#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	string a;
	int b,c,d; 
}s[101];
bool cmp(a g,a h){
	if(g.b!=h.b){
		return g.b<h.b;
	}else if(g.c!=h.c){
		return g.c<h.c;
	}else if(g.d!=h.d){
		return g.d<h.d;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].b>>s[i].c>>s[i].d;
	}
	stable_sort(s+1,s+1+n,cmp);
	for(int i=1;i<=n;i++){
		cout<<s[i].a<<endl;
	}
	return 0;
}