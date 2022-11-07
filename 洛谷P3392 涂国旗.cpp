// Problem: P3392 涂国旗
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P3392
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#define inf 2147483647
#include<iostream>
using namespace std;
char flag[51][51];
int n,m,ans=inf;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int o=1;o<=m;o++){
			cin>>flag[i][o];
		}
	}
	for(int i=1;i<=n-2;i++){
		for(int o=i+1;o<=n-1;o++){
			int tmp=0;
			for(int k=1;k<=i;k++){
				//printf("Now k=(%d),i=(%d)\n",k,i);
				for(int p=1;p<=m;p++){
					if(flag[k][p]!='W'){
						tmp++;
					}
				}
			}
			for(int k=i+1;k<=o;k++){
				//printf("Now k=(%d),i=(%d)\n",k,i);
				for(int p=1;p<=m;p++){
					if(flag[k][p]!='B'){
						tmp++;
					}
				}
			}
			for(int k=o+1;k<=n;k++){
				//printf("Now k=(%d),i=(%d)\n",k,i);
				for(int p=1;p<=m;p++){
					if(flag[k][p]!='R'){
						tmp++;
					}
				}
			}
			ans=min(tmp,ans);
			tmp=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}