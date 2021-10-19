// Problem: P2550 [AHOI2001]彩票摇奖
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2550
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/34786850
//https://www.luogu.com.cn/record/34786853
//https://www.luogu.com.cn/record/34969846
//https://www.luogu.com.cn/record/39268947
//https://www.luogu.com.cn/record/39270535
//https://www.luogu.com.cn/record/39270641
//https://www.luogu.com.cn/record/39270673
//https://www.luogu.com.cn/record/39271164
//https://www.luogu.com.cn/record/39302123
//https://www.luogu.com.cn/record/60310306

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cp[7];
	for(int i=0;i<7;i++){
		cin>>cp[i];
	}
	int xm[1001][7];
	for(int i=1;i<=n;i++){
		for(int o=0;o<7;o++){
			cin>>xm[i][o];
		}
	}
	int zj[7];
	for(int i=1;i<=n;i++){
		int zjj=0;
		for(int o=0;o<7;o++){
			for(int p=0;p<7;p++){
				if(xm[i][o]==cp[p]){
					zjj++;
				}
			}
		}
		zj[7-zjj]++;
	}
	for(int i=0;i<7;i++){
		cout<<zj[i];
		if(i!=6){
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}