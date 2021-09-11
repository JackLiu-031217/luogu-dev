//https://www.luogu.com.cn/problem/P1554
//Author JOHNKRAM
//P1554 梦中的统计
//Bessie 处于半梦半醒的状态。过了一会儿，她意识到她在数数，不能入睡。
//Bessie 的大脑反应灵敏，仿佛真实地看到了她数过的一个又一个数。她开始注意每一个数码（0…9）：每一个数码在计数的过程中出现过多少次？
//给出两个整数 MM 和 NN (1<=M<=N<=2000000000以及N-M<=500000) ，求每一个数码出现了多少次。
#include<iostream>
using namespace std;
int main(){
    int n,m;
    unsigned long long num[10]={0};
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        int a=i; //切记将变量复制出来，不然TLE
        while(a>0){
            switch(a%10){
                case 0:num[0]++;break;
                case 1:num[1]++;break;
                case 2:num[2]++;break;
                case 3:num[3]++;break;
                case 4:num[4]++;break;
                case 5:num[5]++;break;
                case 6:num[6]++;break;
                case 7:num[7]++;break;
                case 8:num[8]++;break;
                case 9:num[9]++;break;
            }
            a/=10;
        }
    }
    for(int i=0;i<=9;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";
    return 0;
}