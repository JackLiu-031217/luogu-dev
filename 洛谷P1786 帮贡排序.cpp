// Problem: P1786 帮贡排序
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1786
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/90639999 30分 (按原顺序排序的判断有问题)
//https://www.luogu.com.cn/record/90640156

#include<iostream>
#include<algorithm>
using namespace std;
int joblimit[4]={2,4,7,25},jobmembernow[4]={},jobnow=0;
struct members{
	string name;
	int job,level,num;
	long long bg;
}member[111];
bool cmp(members a, members b){
	if(a.bg==b.bg){
		return a.num<b.num;
	}else return a.bg>b.bg;
}
bool cmp2(members a,members b){
	if(a.job==b.job){
		if(a.level==b.level){
			return a.num<b.num;
		}else return a.level>b.level;
	}else return a.job<b.job;
}
int job_reorder(){
	if(jobmembernow[jobnow]==joblimit[jobnow]){
		jobnow++;
	}
	if(jobnow==4){
		return 6;
	}
	jobmembernow[jobnow]++;
	return jobnow+2;
}
int main(){
	int n;
	cin>>n;
	string jobs[7]={"BangZhu","FuBangZhu","HuFa","ZhangLao","TangZhu","JingYing","BangZhong"};
	int bangzhunum=0;
	for(int i=1;i<=n;i++){
		member[i].num=i;
		string job;
		cin>>member[i].name>>job>>member[i].bg>>member[i].level;
		if(job=="BangZhu"||job=="FuBangZhu") bangzhunum++;
		for(int o=0;o<7;o++){
			if(job==jobs[o]){
				member[i].job=o;
			}
		}
	}
	sort(member+1+bangzhunum,member+1+n,cmp); //BangZhu及FuBangZhu不纳入排序范围
	for(int i=bangzhunum+1;i<=n;i++){
		member[i].job=job_reorder();
	}
	sort(member+1+bangzhunum,member+1+n,cmp2);
	for(int i=1;i<=n;i++){
		printf("%s %s %d\n",member[i].name.c_str(),jobs[member[i].job].c_str(),member[i].level);
	}
	return 0;
}