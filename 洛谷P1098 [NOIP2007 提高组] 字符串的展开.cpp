// Problem: P1098 [NOIP2007 提高组] 字符串的展开
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1098
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
	int p_1,p_2,p_3;
	char p[101];
	scanf("%d%d%d%s",&p_1,&p_2,&p_3,&p);
	int i=0;
	while(p[i]){
		if(p[i]=='-'&&p[i-1]<p[i+1]&&(((p[i-1]>='a'&&p[i-1]<='z')&&(p[i+1]>='a'&&p[i+1]<='z'))||((p[i-1]>='0'&&p[i-1]<='9')&&(p[i+1]>='0'&&p[i+1]<='9')))){
			if(p_1==3){
				for(int o=p[i-1]+1;o<=p[i+1]-1;o++){
					for(int pp=1;pp<=p_2;pp++){
						printf("*");
					}
				}
				i++;
				continue;
			}
			if(p_3==1){
				for(char tmpp=p[i-1]+1;tmpp<p[i+1];tmpp++){
					char tmppp=tmpp;
					if(p_1==2){
						if(p[i-1]>='a'&&p[i-1]<='z')
							tmppp-=32;
					}
					for(int o=1;o<=p_2;o++){
						printf("%c",tmppp);
					}
				}
				i++;
				continue;
			}else if(p_3==2){
				for(char tmpp=p[i+1]-1;tmpp>p[i-1];tmpp--){
					char tmppp=tmpp;
					if(p_1==2){
						if(p[i-1]>='a'&&p[i-1]<='z')
							tmppp-=32;
					}
					for(int o=1;o<=p_2;o++){
						printf("%c",tmppp);
					}
				}
				i++;
				continue;
			}
		}
	printf("%c",p[i]);
	i++;
	}
	return 0;
}