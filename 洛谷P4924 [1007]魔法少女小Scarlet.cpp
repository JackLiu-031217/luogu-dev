// Problem: P4924 [1007]魔法少女小Scarlet
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4924
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// https://www.luogu.com.cn/record/88875099
// https://www.luogu.com.cn/record/88877110
// https://www.luogu.com.cn/record/88878988

#include<iostream>
using namespace std;
int main(){
	int n,m,p[501][501],nn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int o=1;o<=n;o++){
			p[i][o]=++nn;
		}
	}
	for(int i=1;i<=m;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d; //请注意：输入顺序是先输入中心点纵坐标，后输入中心点横坐标
						 //而非一般而言的先输入横坐标后输入纵坐标！
		int tmp[2*c+1][2*c+1],ly=a-c,lx=b-c;
		for(int x=a-c;x<=a+c;x++){
			for(int o=b-c;o<=b+c;o++){
				if(x<1&&o<1&&x>n&&o>n){
					continue;
				}
				if(d==0){
					tmp[o-lx][2*c-(x-ly)]=p[x][o];
				}else if(d==1){
					tmp[2*c-(o-lx)][x-ly]=p[x][o];
				}
			}
		}
		for(int x=a-c;x<=a+c;x++){
			for(int o=b-c;o<=b+c;o++){
				if(x<1&&o<1&&x>n&&o>n){
					continue;
				}
				p[x][o]=tmp[x-ly][o-lx];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int o=1;o<=n;o++){
			cout<<p[i][o]<<" ";
		}
		cout<<endl;
	}
	return 0;
}