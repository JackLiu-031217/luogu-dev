// Problem: P1583 魔法照片
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1583
// Description:
/*
   一共有n（n≤20000）个人（以1--n编号）向佳佳要照片，而佳佳只能把照片给其中的k个人。
   佳佳按照与他们的关系好坏的程度给每个人赋予了一个初始权值W[i]。
   然后将初始权值从大到小进行排序，每人就有了一个序号D[i]（取值同样是1--n）。
   按照这个序号对10取模的值将这些人分为10类。
   也就是说定义每个人的类别序号C[i]的值为(D[i]-1) mod 10 +1，显然类别序号的取值为1--10。
   第i类的人将会额外得到E[i]的权值。
   你需要做的就是求出加上额外权值以后，最终的权值最大的k个人，并输出他们的编号。
   在排序中，如果两人的W[i]相同，编号小的优先。
*/
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/59593446

//参考:
//https://www.luogu.com.cn/blog/DJCreeper/solution-p1583

#include<iostream>
#include<algorithm>
using namespace std;
struct st{
	int w,num;
}a[20001];
bool cmp(st a,st b){
	if(a.w!=b.w) return a.w>b.w;
	return a.num<b.num;
}
int main(){
	int n,k,e[11];
	cin>>n>>k;
	
	//加权参数赋值
	for(int i=1;i<=10;i++){
		cin>>e[i];
	}
	
	//权重赋值
	for(int i=1;i<=n;i++){
		cin>>a[i].w;
		a[i].num=i;
	}
	
	//排序
	stable_sort(a+1,a+1+n,cmp);
	
	//加权
	for(int i=1;i<=n;i++){
		int d=(i-1)%10;
		a[i].w+=e[d+1];
	}
	
	//二次排序
	stable_sort(a+1,a+1+n,cmp);
	
	for(int i=1;i<=k;i++){
		cout<<a[i].num<<" ";
	}
	
	cout<<endl;
	
	return 0;
}