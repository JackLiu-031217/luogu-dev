/*
  P1028 数的计算
  我们要求找出具有下列性质数的个数(包含输入的正整数 n )。
  先输入一个正整数n(n<=1000),然后对此正整数按照如下方法进行处理：
  不作任何处理；
  在它的左边加上一个正整数,但该正整数不能超过原数的一半；
  加上数后,继续按此规则进行处理,直到不能再加正整数为止。
*/
//重点：递推
//https://www.luogu.com.cn/problem/P1028
#include<iostream>
using namespace std;
int main(){
    int num[10001],i;
    cin>>i;
    num[1]=1;
    for(int m=2;m<=i;m++){
        num[m]=num[m-1];
        if(m%2==0){
            num[m]+=num[m/2];
        }
    }
    cout<<num[i]<<endl;
}