//P5737 【深基7.例3】闰年展示
//输入 x,y(1582<=x<y<=3000)，输出 [x,y]区间中闰年个数，并在下一行输出所有闰年年份数字，使用空格隔开。
#include<iostream>
using namespace std;
int main(){
    int kaishi,jieshu,i,m=0; //m:计数器
    cin>>kaishi>>jieshu;
    for(i=kaishi;i<=jieshu;i++){
        if((i%4==0&&i%100!=0)||(i%400==0&&i%100==0)){ //闰年判断：可以被4整除但不能被100整除/可以同时被400和100整除
            m++;
        }
    }
    cout<<m<<endl;
    for(i=kaishi;i<=jieshu;i++){
        if((i%4==0&&i%100!=0)||(i%400==0&&i%100==0)){
            cout<<i<<" ";
        }
    }
    return 0;
}