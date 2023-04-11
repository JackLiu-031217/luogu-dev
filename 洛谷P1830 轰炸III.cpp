// Problem: P1830 轰炸III
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1830
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// https://www.luogu.com.cn/record/106494348

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int c[101][101];
int cc[101][101];
int main(){
	//memset(c,0,sizeof(c));
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	//cerr<<n<<" "<<m<<" "<<x<<" "<<y<<endl;
	for(int i=1;i<=x;i++){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int p=x1;p<=x2;p++){
			for(int o=y1;o<=y2;o++){
				c[o][p]++;
				//fprintf(stderr,"i=%d, c[%d][%d]=%d\n",i,o,p,c[o][p]);
				cc[o][p]=i;
			}
		}
	}
	for(int i=1;i<=y;i++){
		int xx,yy;
		cin>>xx>>yy;
		//fprintf(stderr,"%d %d\n",c[yy][xx],cc[yy][xx]);
		if(c[yy][xx]!=0){
			printf("Y %d %d\n",c[yy][xx],cc[yy][xx]);
		}else printf("N\n");
	}
	return 0;
}