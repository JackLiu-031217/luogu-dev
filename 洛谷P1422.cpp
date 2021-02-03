//P1422 小玉家的电费
//https://www.luogu.com.cn/problem/P1422
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,c;
	double b;
	cin>>a;
	if(a<=150)
	{
		b=0.4463*a;
	}
	else if(a>150&&a<=400)
	{
		c=a-150;
		b+=150*0.4463;
		b+=c*0.4663;
	}
	else
	{
		c=a-400;
		b+=150*0.4463;
		b+=250*0.4663;
		b+=c*0.5663;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<b;
	return 0;
}