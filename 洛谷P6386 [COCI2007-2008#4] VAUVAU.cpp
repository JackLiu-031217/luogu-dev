// Problem: P6386 [COCI2007-2008#4] VAUVAU
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P6386
// Memory Limit: 31 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int a=a1+a2,b=b1+b2;
	for(int i=1;i<=3;i++){
		int t;
		cin>>t;
		if((t%a<=a1&&t%b>b1&&t%a!=0||(t%a>a1&&t%b<=b1&&t%b!=0))){
			printf("one\n");
		}else if(t%a<=a1&&t%b<=b1&&t%a!=0&&t%b!=0){
			printf("both\n");
		}else printf("none\n");
	}
	return 0;
}