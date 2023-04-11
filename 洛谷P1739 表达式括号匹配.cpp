// Problem: P1739 表达式括号匹配
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1739
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int lc=0,lr=0;
	for(int i=0;;i++){
		if(a[i]=='@'){
			break;
		}else if(a[i]=='('){
			lc++;
		}else if(a[i]==')'){
			lr++;
			if(lr<=lc){
				continue;
			}else{
				printf("NO\n");
				return 0;
			}
		}
	}
	if(lc==lr){
		printf("YES\n");
	}else printf("NO\n");
	return 0;
}