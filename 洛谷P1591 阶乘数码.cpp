// Problem: P1591 阶乘数码
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1591
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cstring>
using namespace std;
int num[100001];
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		int n,aa;
		cin>>n>>aa;
		int w=1;
		num[1]=1;
		for(int o=2;o<=n;o++){
			for(int p=1;p<=w;p++){
				num[p]*=o;
			}
			for(int p=1;p<=w;p++){
				if(num[p]>=10){
					num[p+1]+=num[p]/10;
					num[p]%=10;
					if(p==w){
						int tmp=num[p+1],ww=1;
						while(tmp>=10){
							tmp/=10;
							ww++;
						}
						w+=ww;
					}
				}
			}
		}
		int ans=0;
		for(int p=1;p<=w;p++){
			if(num[p]==aa){
				ans++;
			}
		}
		cout<<ans<<endl;
		memset(num,0,sizeof(num));
	}
	return 0;
}