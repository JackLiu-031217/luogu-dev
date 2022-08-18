//P1965 [NOIP2013 提高组] 转圈游戏
//https://www.luogu.com.cn/problem/P1965
//一道关于快速幂的好题
//关于快速幂: https://www.cnblogs.com/fusiwei/p/11599881.html (By Seaway-Fu)

//https://www.luogu.com.cn/record/83702161 0
//https://www.luogu.com.cn/record/83704961 10
//https://www.luogu.com.cn/record/83707908 20
//https://www.luogu.com.cn/record/83708500 100

#include<iostream>
using namespace std;
int main(){
    int n,m,k,x,tmp=1,temp=10;
    cin>>n>>m>>k>>x;
    //快速幂求轮数
    //例:k=(10)_10=(110)_2, 10^k=10^10=10^8*10^2=10^(2^3)*10^(2^2).
    while(k){
        if(k&1){
            tmp=tmp*temp%n;        //不要
        }
        temp=temp*temp%n;          //忘记
        k>>=1;
    }                              //轮数上求余
    cout<<(x%n+m%n*tmp%n)%n<<endl;
    return 0;                      //尽管我没明白为啥轮数也得求余
}
                                   //弱是我的问题QAQ