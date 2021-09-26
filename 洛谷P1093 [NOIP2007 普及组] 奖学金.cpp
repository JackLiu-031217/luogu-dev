// Problem: P1093 [NOIP2007 普及组] 奖学金
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1093
// Description:
/*
   某小学最近得到了一笔赞助，打算拿出其中一部分为学习成绩优秀的前5名学生发奖学金。
   期末，每个学生都有3门课的成绩:语文、数学、英语。
   先按总分从高到低排序，如果两个同学总分相同，再按语文成绩从高到低排序，
   如果两个同学总分和语文成绩都相同，那么规定学号小的同学排在前面，这样，每个学生的排序是唯一确定的。
   任务：先根据输入的3门课的成绩计算总分，然后按上述规则排序，最后按排名顺序输出前五名名学生的学号和总分。
   注意，在前5名同学中，每个人的奖学金都不相同，因此，你必须严格按上述规则排序。
   例如，在某个正确答案中，如果前两行的输出数据(每行输出两个数:学号、总分) 是:
   7 279\n 5 279
   这两行数据的含义是:总分最高的两个同学的学号依次是7号、5号。
   这两名同学的总分都是 279 (总分等于输入的语文、数学、英语三科成绩之和) ，但学号为7的学生语文成绩更高一些。
   如果你的前两名的输出数据是:
   5 279\n 7 279
   则按输出错误处理，不能得分。
*/
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/58604620

#include<iostream>
#include<algorithm> //sort(start,end,cmp)
using namespace std;

struct stu{
	int num,y,s,e,z;
}a[301];

bool cmp(stu a,stu b){
	if(a.z>b.z){
		return 1;
	}else if(a.z<b.z){
		return 0;
	}else if(a.y<b.y){
		return 0;
	}else if(a.y>b.y){
		return 1;
	}else if(a.num>b.num){
		return 0;
	}else return 1;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i].num=i;
		cin>>a[i].y>>a[i].s>>a[i].e;
		a[i].z=a[i].y+a[i].s+a[i].e;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=5;i++){
		cout<<a[i].num<<" "<<a[i].z<<endl;
	}
	return 0;
}