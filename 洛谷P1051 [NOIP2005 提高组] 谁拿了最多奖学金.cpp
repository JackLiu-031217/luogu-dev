// Problem: P1051 [NOIP2005 提高组] 谁拿了最多奖学金
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1051
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59251532

#include<iostream>
using namespace std;
int main(){
	struct{
		string n;
		int qm,py,lw;
		unsigned int mon=0;
		char gb,xb;
	}stu[101];
	int n;
	unsigned int z=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stu[i].n>>stu[i].qm>>stu[i].py>>stu[i].gb>>stu[i].xb>>stu[i].lw;
	}
	for(int i=1;i<=n;i++){
		if(stu[i].py>80){
			if(stu[i].gb=='Y'){
				stu[i].mon+=850;
			}
		}
		if(stu[i].qm>80){
			if(stu[i].lw>=1){
				stu[i].mon+=8000;
			}
		}
		if(stu[i].qm>85){
			if(stu[i].xb=='Y'){
				stu[i].mon+=1000;
			}
			if(stu[i].py>80){
				stu[i].mon+=4000;
			}
		}
		if(stu[i].qm>90) stu[i].mon+=2000;
		z+=stu[i].mon;
	}
	unsigned int m=0;
	string mr;
	for(int i=1;i<=n;i++){
		if(stu[i].mon>m){
			m=stu[i].mon;
			mr=stu[i].n;
		}
	}
	cout<<mr<<endl<<m<<endl<<z<<endl;
	return 0;
}