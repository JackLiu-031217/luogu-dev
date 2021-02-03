//https://www.luogu.com.cn/record/34969846
//https://www.luogu.com.cn/record/39271164
//https://www.luogu.com.cn/record/39302123
//https://www.luogu.com.cn/record/39303347
#include<iostream>
using namespace std;
int main(){
    bool price[34]={0};
    int ticketnum,ticket[1001][8]={0},pricelevel[8]={0},pricesum[8]={0};
    cin>>ticketnum; //小明有几张票?
    for(int i=1;i<=7;i++){
        int j;
        cin>>j;
        price[j]=1; //票上有什么数字?
    }
    for(int j=1;j<=ticketnum;j++){ //第几张票?
        for(int k=1;k<=7;k++){
            cin>>ticket[j][k]; //第*张票的数字
        }
    }
    for(int i=1;i<=ticketnum;i++){ //每一张票都查一遍
        for(int k=1;k<=7;k++){ //每一个数都对一遍
            if(price[ticket[i][k]]==1){ //奖票数字和小明手上票子的数字对上了!
                pricelevel[i]++; //第*张票的中奖级别增加了!
            }
        }
        pricesum[7-pricelevel[i]]++;
    }
    for(int i=0;i<=6;i++){
        cout<<pricesum[i]<<" ";
    }
    return 0;
}