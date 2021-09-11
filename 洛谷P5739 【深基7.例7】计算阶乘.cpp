//洛谷OJ P5739 【深基7.例7】计算阶乘
//不用for/while算阶乘
/*---------------------
  提交三次评测机炸两次
---------------------*/
#include<iostream>
using namespace std;
int n;
int ans=1;
int times(int i){
    if(i==n){
        return ans;
    }else{
        ans*=i+1;
        return times(i+1);
    }
}
int main(){
    cin>>n;
    int o=times(1);
    cout<<o<<endl;
    return 0;
}