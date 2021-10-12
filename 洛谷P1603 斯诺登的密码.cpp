// Problem: P1603 斯诺登的密码
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1603
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59647357
//https://www.luogu.com.cn/record/59675817
//https://www.luogu.com.cn/record/59675873

#include<iostream>
#include<algorithm>
using namespace std;
int c(string a){
	if(a=="one"||a=="a"||a=="another"||a=="first") return 1;
	if(a=="two"||a=="second"||a=="both") return 4;
	if(a=="three"||a=="third") return 9;
	if(a=="four") return 16;
    if(a=="five") return 25;
    if(a=="six") return 36;
    if(a=="seven") return 49;
    if(a=="eight") return 64;
    if(a=="nine") return 81;
    //10^2%10=0
    if(a=="eleven") return 21;
    if(a=="twelve") return 44;
    if(a=="thirteen") return 69;
    if(a=="fourteen") return 96;
    if(a=="fifteen") return 25;
    if(a=="sixteen") return 56;
    if(a=="seventeen") return 89;
    if(a=="eighteen") return 24;
    if(a=="nineteen") return 61;
    //20^2%10=0
    return 0;
}
int main(){
	int m[6]={0,0,0,0,0,0};
	for(int i=0;i<6;i++){
		string a;
		cin>>a;
		m[i]+=c(a);
	}
	sort(m,m+6);
	int cz=0;
	for(int i=0;i<6;i++){
		cz+=m[i];
	}
	if(cz==0){
		cout<<"0"<<endl;
		return 0;
	}
	bool fi=1;
	for(int i=0;i<6;i++){
		if(m[i]>0){
			if(m[i]<10&&fi!=1){
				cout<<"0";
			}
			cout<<m[i];
			fi=0;
		}
	}
	cout<<endl;
	return 0;
}