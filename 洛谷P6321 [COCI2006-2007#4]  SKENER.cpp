// Problem: P6321 [COCI2006-2007#4]  SKENER
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P6321
// Memory Limit: 31 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int r,c,zr,zc;
	char ch[52][52];
	//scanf("%d %d %d %d\n",&r,&c,&zr,&zc);
	cin>>r>>c>>zr>>zc;
	for(int i=1;i<=r;i++){
		int o;
		//for(o=1;o<c;o++){
		for(o=1;o<=c;o++){
			//scanf("%c",&ch[i][o]);
			cin>>ch[i][o];
		}
        //scanf("%c\n",&ch[i][c]);	
	}
	for(int i=1;i<=r;i++){
		for(int ii=1;ii<=zr;ii++){
			for(int o=1;o<=c;o++){
				for(int oo=1;oo<=zc;oo++){
					printf("%c",ch[i][o]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}