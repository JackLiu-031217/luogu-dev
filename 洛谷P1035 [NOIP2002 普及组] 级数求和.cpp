//洛谷网校 P1035 级数求和 NOIP2002普及组
//题目链接https://www.luogu.com.cn/problem/P1035
#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,k,num; 
	//n,k均是题目中提及变量，num说白了就是每一步中的Sn（不知道Markdown的代码块里能不能打LaTeX）
	//这道题需要保证精度足够，double型变量比float精度高点，但是float我没试过
	num=0; //先要给num变量归零
	cin>>k; //输入整数k
	for(n=1;n<=2147483647;++n) //循环计算Sn
	{
		num=num+1/n; //重复复现1+1/2+1/3+..+1/n的操作，要保证n的最大值足够大
		if(num>=k) //判断Sn是否大于输入的整数k
		{
			cout<<n; //如果成立，输出当前的n值
			return 0; //同时结束程序运行
		}
	}
}