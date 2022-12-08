// Problem: P3799 妖梦拼木棒
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P3799
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/95256641
//https://www.luogu.com.cn/record/95260815
//https://www.luogu.com.cn/record/95261441
//https://www.luogu.com.cn/record/95261932
//https://www.luogu.com.cn/record/96597614
//https://www.luogu.com.cn/record/96799377
//https://www.luogu.com.cn/record/96800038
//不看题解的话……根本没想到要用高中数学的排列组合知识解……

#include<iostream>
#include<cmath>
using namespace std;
int b[100001];
const int mod=pow(10,9)+7;
long long ans=0;
int main(){
	int a,maxl=-1;
	cin>>a;
	for(int i=1;i<=a;i++){
		int tmp;
		cin>>tmp;
		maxl=max(maxl,tmp);
		b[tmp]++;
	}
	for(int i=1;i<=maxl;i++){
		for(int o=i;o<=maxl;o++){
			if(i==o){
				ans=(ans+(((b[i]*(b[i]-1))/2%mod)*(b[i+o]*(b[i+o]-1)/2%mod)))%mod; 
				//高中数学的排列组合 Example:C_5^2=A(5,2)/2=(5*4)/2=10;
				//下文同理
			}else ans=(ans+(((b[i]*b[o])%mod)*(b[i+o]*(b[i+o]-1))/2%mod))%mod; //早忘球了
		}
	}
	cout<<ans<<endl;
	return 0;
}