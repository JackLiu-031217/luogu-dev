/*---------------------------------------------
        P5728 【深基5.例5】旗鼓相当的对手       
---------------------------------------------*/
//https://www.luogu.com.cn/problem/P5728

/*
  现有 N(N<=1000) 名同学参加了期末考试，并且获得了每名同学的信息：
  语文、数学、英语成绩（均为不超过 150 的自然数）。
  如果某对学生 <i,j> 的每一科成绩的分差都不大于 5，且总分分差不大于 10，那么这对学生就是“旗鼓相当的对手”。
  现在想知道这些同学中，有几对“旗鼓相当的对手”？同样一个人可能会和其他好几名同学结对。
*/

//https://www.luogu.com.cn/record/34785861
//https://www.luogu.com.cn/record/53184594
//https://www.luogu.com.cn/record/53571412

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,stu[1001][3],stuall[1001]={0},qgxd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int o=0;o<=2;o++){
            cin>>stu[i][o];
            stuall[i]+=stu[i][o];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int o=i+1;o<n;o++){
            int qgflag=0;
            for(int k=0;k<=2;k++){
                if(abs(stu[i][k]-stu[o][k])<=5){
                    qgflag++;
                }
            }
            if(qgflag==3){
                if(abs(stuall[i]-stuall[o])<=10){
                    qgxd++;
                }
            }
        }
    }
    cout<<qgxd<<endl;
    return 0;
}