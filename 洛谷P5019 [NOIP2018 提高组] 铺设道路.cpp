//P5019 [NOIP2018 提高组] 铺设道路
//https://www.luogu.com.cn/problem/P5019

//Tag: 贪心,树状数组,NOIp 提高组,2018
//做法貌似和部分Tag沾不上边啊（挠头
//可能是错觉，也可能是我学艺不精？
//https://www.luogu.com.cn/record/84934937

#include<iostream>
using namespace std;
int main(){
    int n,r[100001],ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>r[i];
    }
    for(int i=1;i<=n;i++){
        if(r[i]>r[i-1]){ //和P1969一个套路
            ans+=r[i]-r[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}