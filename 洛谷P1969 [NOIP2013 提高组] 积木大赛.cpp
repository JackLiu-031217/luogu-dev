//P1969 [NOIP2013 提高组] 积木大赛
//https://www.luogu.com.cn/problem/P1969

//Tag:模拟,贪心,递归,NOIp 提高组,2013,2018
//https://www.luogu.com.cn/record/84616704

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,ans=0;
    int h[100001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    for(int i=1;i<=n;i++){
        if(h[i]>h[i-1]){ //左小右大加摆放次数，左大右小不管，全层级样式通吃
            ans+=h[i]-h[i-1];
        }
    }
    cout<<ans<<endl;
}