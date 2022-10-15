// Problem: P5595 【XR-4】歌唱比赛
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P5595
// Memory Limit: 500 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/89779135
//https://www.luogu.com.cn/record/89779267

#include<iostream>
using namespace std;
bool xx[1000001],xy[1000001];
int main(){
	string a;
	cin>>a;
	bool z_exist=0;
	for(int i=0;i<a.length();i++){
		if(a[i]!='Z'&&z_exist){
			cout<<"-1"<<endl;
			return 0;
		}
		if(a[i]=='X'){
			xx[i]=1;
		}else if(a[i]=='Y'){
			xy[i]=1;
		}else if(a[i]=='Z'){
			z_exist=1;
			xx[i]=0;
			xy[i]=0;
		}
	}
	for(int i=0;i<a.length();i++){
		cout<<xx[i];
	}
	cout<<endl;
	for(int i=0;i<a.length();i++){
		cout<<xy[i];
	}
	cout<<endl;
	return 0;
}