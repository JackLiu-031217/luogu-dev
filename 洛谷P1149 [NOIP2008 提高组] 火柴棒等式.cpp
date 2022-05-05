//P1149 [NOIP2008 提高组] 火柴棒等式
//https://www.luogu.com.cn/problem/P1149
//https://www.luogu.com.cn/record/75180326

#include<iostream>
using namespace std;
int b[2001]={6}; //绝对够用，略浪费内存空间
int main(){
    int a[10]={6,2,5,5,4,5,6,3,7,6},n,ans=0;
    for(int i=1;i<=2000;i++){ //略过数字 0 以避免自己写不清判断（
        int p=i;
        while(p!=0){
            b[i]+=a[p%10];
            p/=10;
        }
    }
    cin>>n;
    for(int i=0;i<=1000;i++){
        for(int o=0;o<=1000;o++){
            if(b[i]+b[o]+b[o+i]+4==n){
                ans++;
            }
        }
    }
    //有够暴力的hhhh
    cout<<ans<<endl;
}