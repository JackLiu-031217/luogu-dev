//洛谷 P1423 小玉在游泳 作者yeszy
//https://www.luogu.com.cn/problem/P1423
#include<bits/stdc++.h>
using namespace std;
int main(){
	float mubiao,juli,everytime,step; //目标路程 走出去的路程 每次走的路程 走的步数
	everytime=2; //第一步走2m
	cin>>mubiao; //输入目标
	while(mubiao>=juli) //while循环，达到条件直接结束
	{
		juli+=everytime; //上一次走出去的路程+每次里程=这一次的路程
		everytime*=0.98; //下次走的是上一次的98%
		step++; //步数+1
	}
	cout<<step; //达到条件后循环结束，输出步数
	return 0; //程序终结
}