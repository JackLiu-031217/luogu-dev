// Problem: P5143 攀爬者
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P5143
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/89313416

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct sss{
		int x,y,z;
}s[50001];
bool cmp(sss a,sss b){
	return a.z<b.z;
}
int main(){
	int n;
	//int x[50001],y[50001],z[50001],n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		//scanf("%d%d%d",&x[i],&y[i],&z[i]);
		scanf("%d%d%d",&s[i].x,&s[i].y,&s[i].z);
	}
	/* 以下为旧办法，三个数据点TLE
	int newsort[50001];
	bool checked[50001];
	for(int i=1;i<=n;i++){
		int minn=2147483647,minnn;
		for(int o=n;o>=1;o--){
			if(checked[o]==0&&minn>z[o]){
				newsort[i]=o;
				minn=z[o];
				minnn=o;
			}
		}
		checked[minnn]=1;
	}
	
	int xp=x[newsort[1]],yp=y[newsort[1]],zp=z[newsort[1]];
	double ans;
	for(int i=2;i<=n;i++){
		ans+=sqrt(pow(abs(x[newsort[i]]-xp),2)+pow(abs(y[newsort[i]]-yp),2)+pow(abs(z[newsort[i]]-zp),2));
		xp=x[newsort[i]];
		yp=y[newsort[i]];
		zp=z[newsort[i]];
	}
	*/
	//以下为新方法，借鉴了洛谷题解内容
	//结构体排序
	sort(s+1,s+n+1,cmp); //未曾设想的sort使用方法，我之前甚至不知道这玩意能用在结构体
	int xp=s[1].x,yp=s[1].y,zp=s[1].z;
	double ans=0.0;
	for(int i=2;i<=n;i++){
		ans+=sqrt(pow(abs(s[i].x-xp),2)+pow(abs(s[i].y-yp),2)+pow(abs(s[i].z-zp),2));
		xp=s[i].x;
		yp=s[i].y;
		zp=s[i].z;
	}
	printf("%.3lf\n",ans);
	return 0;
}