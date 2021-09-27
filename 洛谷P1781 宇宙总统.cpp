// Problem: P1781 宇宙总统
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1781
// Description:
/*
   地球历公元 6036 年，全宇宙准备竞选一个最贤能的人当总统，共有 n 个非凡拔尖的人竞选总统，
   现在票数已经统计完毕，请你算出谁能够当上总统。
*/
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/58628837
//https://www.luogu.com.cn/record/58658629

#include<iostream>
using namespace std;
int main(){
	int n,maxn;
	string maxx="";
	cin>>n;
	for(int i=1;i<=n;i++){
		string a;
		cin>>a;
		if(a.length()>maxx.length()){
			maxx=a;
			maxn=i;
		}else if(a.length()==maxx.length()){
			int mm=a.length();
			for(int m=0;m<mm;m++){
				if(a[m]<maxx[m]){
					break;
				}
				if(a[m]>maxx[m]){
					maxx=a;
					maxn=i;
					break;
				}
			}
		}
	}
	cout<<maxn<<endl<<maxx<<endl;
	return 0;
}