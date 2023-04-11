// Problem: P2956 [USACO09OCT]The Robot Plow G
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2956
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<cstdio>
bool field[241][241];
int main(){
	int a,b,t,ans=0;
	scanf("%d%d%d",&a,&b,&t);
	for(int i=1;i<=t;i++){
		int a1,b1,a2,b2;
		scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
		for(int o=b1;o<=b2;o++){
			for(int p=a1;p<=a2;p++){
				if(!field[o][p]){
					field[o][p]=1;
					ans++;
				}
			}
		}
	}
	
	printf("%d\n",ans);
	return 0;
}