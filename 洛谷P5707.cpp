/*--------------------------------/
    P5707 【深基2.例12】上学迟到
/--------------------------------*/
//https://www.luogu.com.cn/problem/P5707

//yyy 的学校要求早上 8 点前到达。学校到 yyy 的家一共有 s(s<=10000) 米，
//而 yyy 可以以 v(v<10000) 米每分钟的速度匀速走到学校。
//此外在上学路上它还要额外花 10 分钟时间进行垃圾分类。
//请问为了避免迟到 yyy 最晚什么时候出门？
//输出 HH:MM 的时间格式，不足两位时补零。由于路途遥远， yyy 可能不得不提前一天出发，不过不可能提前超过一天。

//https://www.luogu.com.cn/record/51650685
//https://www.luogu.com.cn/record/51650724
//https://www.luogu.com.cn/record/51650764
//https://www.luogu.com.cn/record/51650769
//https://www.luogu.com.cn/record/52423311

#include<iostream>
using namespace std;
int main(){
    int s,v;
    cin>>s>>v;

    int hh=8,mm=0,m=s/v+10;
    if(s%v){
        m++;
    }
    mm-=m;
    while(mm<0){
        mm+=60;
        hh--;
        if(hh<0){
            hh+=24;
        }
    }

    if(hh<10){
        cout<<"0"<<hh<<":";
    }else cout<<hh<<":";
    if(mm<10){
        cout<<"0"<<mm<<endl;
    }else cout<<mm<<endl;
    
    return 0;
}