// Problem: P1518 [USACO2.4]两只塔姆沃斯牛 The Tamworth Two
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1518
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// https://www.luogu.com.cn/record/88593873

#include<iostream>
using namespace std;
int forest[11][11];
int cx,cy,fx,fy;
bool xysame(){
	if(cx==fx&&cy==fy){
		return 0;
	}else return 1;
}
int main(){
	char tmp;
	for(int i=1;i<=10;i++){
		for(int o=1;o<=10;o++){
			cin>>tmp;
			if(tmp=='F'){
				//cerr<<"F @"<<o<<", "<<i<<".\n"<<endl;
				fx=o;
				fy=i;
			}else if(tmp=='C'){
				//cerr<<"C @"<<o<<", "<<i<<".\n"<<endl;
				cx=o;
				cy=i;
			}else if(tmp=='*'){
				//cerr<<"* @"<<o<<", "<<i<<".\n"<<endl;
				forest[i][o]=1;
			}
			//cout<<forest[i][o];
		}
		//cout<<"\n";
	}
	int dc=0,df=0,movex[4]={0,1,0,-1},movey[4]={-1,0,1,0},ans=0;
	while(xysame()){
		if(forest[cy+movey[dc]][cx+movex[dc]]==0&&cy+movey[dc]>0&&cy+movey[dc]<=10&&cx+movex[dc]>0&&cx+movex[dc]<=10){
			cy+=movey[dc];
			cx+=movex[dc];
			//cerr<<"Now c@"<<cx<<","<<cy<<endl;
		}else{
			dc++;
			if(dc>3) dc=0; //错误记录：dc与df越过数组范围导致引用时RE
		}
		if(forest[fy+movey[df]][fx+movex[df]]==0&&fy+movey[df]>0&&fy+movey[df]<=10&&fx+movex[df]>0&&fx+movex[df]<=10){
			fy+=movey[df];
			fx+=movex[df];
			//cerr<<"Now f@"<<fx<<","<<fy<<endl;
		}else{
			df++;
			if(df>3) df=0; //错误记录：dc与df越过数组范围导致引用时RE
		}
		ans++;
		if(ans>160000){ //160000
			cout<<0<<endl;
			return 0;
		}
	}
	printf("%d",ans);
	return 0;
}