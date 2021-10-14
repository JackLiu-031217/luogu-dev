// Problem: P1223 排队接水
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1223
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59799072

#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
struct s{
	int x;
	long long t;
}a[1001];
bool cmp(s a,s b){
	return a.t<b.t;
}
int main(){
	int n;
	double tmp=0.00;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t;
		a[i].x=i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].x;
		if(i!=n){
			cout<<" ";
		}
		tmp+=a[i].t*(n-i); //后面人的等待时间是累积的！
	}
	cout<<endl;
	double ans=tmp/n;
	cout<<fixed<<setprecision(2)<<ans<<endl;
	return 0;
}