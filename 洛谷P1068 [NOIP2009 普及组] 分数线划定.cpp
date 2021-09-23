/*
	P1068 [NOIP2009 普及组] 分数线划定
	https://www.luogu.com.cn/problem/P1068
	
	世博会志愿者的选拔工作正在 A 市如火如荼的进行。
	为了选拔最合适的人才，A市对所有报名的选手进行了笔试，笔试分数达到面试分数线的选手方可进入面试。
	面试分数线根据计划录取人数的 150% 划定，即如果计划录取 m 名志愿者，则面试分数线为排名第 m * 150% （向下取整）名的选手的分数，
	而最终进入面试的选手为笔试成绩不低于面试分数线的所有选手。
	现在就请你编写程序划定面试分数线，并输出所有进入面试的选手的报名号和笔试成绩。
*/

//https://www.luogu.com.cn/record/58413392

#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	m*=1.5;
	int fen[101]={0};
	int xs[9000]={0};
	
	for(int i=1;i<=n;i++){
		int l,f;
		cin>>l>>f;
		xs[l-1000]=f;
		fen[f]++;
	}
	
	int p=0,fe=0;
	bool pd=0,f[101];
	for(int i=100;i>=fe;i--){
		if(fen[i]!=0)
			f[i]=1;
		p+=fen[i];
		if(pd==0){
			if(p>=m){
				fe=i;
				pd=1;
			}
		}
	}
	cout<<fe<<" "<<p<<endl;
	
	for(int i=100;i>=fe;i--){
		if(f[i]){
			for(int l=0;l<=8999;l++){
				if(xs[l]==i){
					cout<<l+1000<<" "<<i<<endl;
				}
			}
		}
	}

	return 0;
}