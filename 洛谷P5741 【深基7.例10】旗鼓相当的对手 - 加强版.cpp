/*
    P5741 【深基7.例10】旗鼓相当的对手 - 加强版
    https://www.luogu.com.cn/problem/P5741

    现有 N(N<=1000) 名同学参加了期末考试，并且获得了每名同学的信息：
    姓名（不超过 8 个字符的字符串，没有空格）、语文、数学、英语成绩（均为不超过 150 的自然数）。
    如果某对学生 <i,j> 的每一科成绩的分差都不大于 5，且总分分差不大于 10，那么这对学生就是“旗鼓相当的对手”。
    现在我们想知道这些同学中，哪些是“旗鼓相当的对手”？请输出他们的姓名。
    所有人的姓名是按照字典序给出的，输出时也应该按照字典序输出所有对手组合。
    也就是说，这对组合的第一个名字的字典序应该小于第二个；如果两个组合中第一个名字不一样，则第一个名字字典序小的先输出；
    如果两个组合的第一个名字一样但第二个名字不同，则第二个名字字典序小的先输出。
*/

//https://www.luogu.com.cn/record/57984673

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    struct{
        string n;
        int y,s,en;
    }s[1000];
    int st;
    cin>>st;
    for(int i=0;i<st;i++){
        cin>>s[i].n>>s[i].y>>s[i].s>>s[i].en;
    }
    for(int i=0;i<st-1;i++){
        for(int o=i+1;o<st;o++){
            if(abs(s[i].y-s[o].y)<=5){
                if(abs(s[i].s-s[o].s)<=5){
                    if(abs(s[i].en-s[o].en)<=5){
                        int x=s[i].y+s[i].s+s[i].en;
                        int y=s[o].y+s[o].s+s[o].en;
                        if(abs((x)-(y))<=10){
                            cout<<s[i].n<<" "<<s[o].n<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}