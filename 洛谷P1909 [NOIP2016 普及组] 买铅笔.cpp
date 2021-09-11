//洛谷网校练习 P1909买铅笔 NOIP2016普及组
//https://www.luogu.com.cn/discuss/show/185108
//感谢各位大佬帮助
#include<bits/stdc++.h> //通用头文件，明者自明（
using namespace std;
int main(){
	int need,number[3],price[3],zong[3],boxnum[3],ans,i,yushu[3];
	//need需求数量，numberX包装中的支数，priceX每盒价钱，boxnum盒数，zong总价钱，ans最终最小值答案，i下面for循环用
	//yushu用于检查是否应该多弄一盒
	cin>>need; //输入需求
	ans=2147483647; //拿int函数限定值堵住BUG的嘴（
	
	for (i=0;i<3;++i)
	{
		cin>>number[i]>>price[i]; //输入支数和价格
		boxnum[i]=need/number[i]; //统计盒数
		yushu[i]=need%number[i];
		if(yushu[i]!=0) //有余数则盒数+1
			boxnum[i]=boxnum[i]+1; //朴实的+1方法（其实是忘了是boxnum++还是++boxnum了）
		zong[i]=boxnum[i]*price[i]; //统计总价格
		if(zong[i]<ans) //取最小值
			ans=zong[i];
	}
	cout<<ans; //输出
	return 0; //GAME OVER!
}
