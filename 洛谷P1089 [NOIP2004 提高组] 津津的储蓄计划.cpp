//P1089 津津的储蓄计划
//这是坨啥东西
#include<bits/stdc++.h>
using namespace std;
int main(){
	int huaxiao,youqian,shengqian,touzhi,huaduodeyue,a,maya;
	youqian=0;
	maya=0;
	touzhi=0;
	for(a=1;a<=12;a++)
	{
		youqian+=200;
		cin>>huaxiao;
		shengqian=youqian-huaxiao;
		if(shengqian<0)
		{
			touzhi=1;
			cout<<a<<endl;
			break;
		}
		maya+=shengqian/100;
		youqian%=100;
	}
	if(touzhi=0)
	{
		youqian+=120*maya;
		cout<<youqian;
	}
	else
	{
		cout<<"-"<<youqian;
	}
	return 0;
}