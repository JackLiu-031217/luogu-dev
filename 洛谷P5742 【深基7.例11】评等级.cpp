/*
    P5742 【深基7.例11】评等级
    https://www.luogu.com.cn/problem/P5742

    现有 N(N<=1000) 名同学，每名同学需要设计一个结构体记录以下信息：
    学号（不超过 100000 的正整数）、学业成绩和素质拓展成绩（分别是 0 到 100 的整数）、综合分数（实数）。
    每行读入同学的姓名、学业成绩和素质拓展成绩，并且计算综合分数（分别按照 70% 和 30% 权重累加），存入结构体中。还需要在结构体中定义一个成员函数，返回该结构体对象的学业成绩和素质拓展成绩的总分。
    然后需要设计一个函数，其参数是一个学生结构体对象，判断该学生是否“优秀”。
    优秀的定义是学业和素质拓展成绩总分大于 140 分，且综合分数不小于 80 分。
    当然通过本题很容易啦，本题只是为了帮助你训练结构体的使用方法。
*/

//https://www.luogu.com.cn/record/57704738
//https://www.luogu.com.cn/record/57704805
//https://www.luogu.com.cn/record/57704904
//https://www.luogu.com.cn/record/57705036
//https://www.luogu.com.cn/record/57705108
//https://www.luogu.com.cn/record/57705472

#include<iostream>
using namespace std;
int main(){
    struct{
        int sn;
        int xy;
        int tz;
    }stu[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>stu[i].sn>>stu[i].xy>>stu[i].tz;
        double z=((stu[i].xy)*0.7)+((stu[i].tz)*0.3);
        if(z>=80.00){
            if((stu[i].xy+stu[i].tz)>140){
                cout<<"Excellent"<<endl;
            }else cout<<"Not excellent"<<endl; //!
        }else cout<<"Not excellent"<<endl;
    }
    return 0;
}