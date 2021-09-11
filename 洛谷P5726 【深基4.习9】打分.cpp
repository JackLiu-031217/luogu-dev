/*
    P5726 【深基4.习9】打分
    https://www.luogu.com.cn/problem/P5726

    现在有 n(n<=1000) 位评委给选手打分，分值从 0 到 10。需要去掉一个最高分，去掉一个最低分
    （如果有多个最高或者最低分，也只需要去掉一个）
    剩下的评分的平均数就是这位选手的得分。
    现在输入评委人数和他们的打分，请输出选手的最后得分，精确到 2 位小数。
*/

//https://www.luogu.com.cn/record/57727099

#include<iostream>
#include<iomanip> // setprecision(int)
using namespace std;
int main(){
    int n,sc[1001],mi=10,ma=0;
    double ans,zf=0.00;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>sc[i];
        zf+=sc[i];
        if(sc[i]>ma){
            ma=sc[i];
        }
        if(sc[i]<mi){
            mi=sc[i];
        }
    }
    zf-=ma+mi;
    ans=zf/(n-2);
    cout<<setprecision(3)<<ans<<endl;
    return 0;
}