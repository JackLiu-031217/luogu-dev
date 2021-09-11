//P5744 【深基7.习9】培训

//某培训机构的学员有如下信息：
//姓名（字符串）
//年龄（周岁，整数）
//去年 NOIP 成绩（整数，且保证是 5 的倍数 ）
//经过为期一年的培训，所有同学的成绩都有所提高，提升了 20%。
//（当然 NOIP 满分是 600 分，不能超过这个得分）。
//输入学员信息，请设计一个结构体储存这些学生信息，并设计一个函数模拟培训过程，
//其参数是这样的结构体类型，返回同样的结构体类型，并输出学员信息。

//氵题（

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        struct{
            string na;
            int ag;
            int sc;
        }a;
        cin>>a.na;
        cout<<a.na<<" ";
        cin>>a.ag;
        cout<<a.ag+1<<" ";
        cin>>a.sc;
        if(a.sc*1.2<=600){
            cout<<a.sc*1.2<<endl;
        }else cout<<600<<endl;
    }
    return 0;
}