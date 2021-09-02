/*
  P1304 哥德巴赫猜想
  https://www.luogu.com.cn/problem/P1304

  输入一个偶数 N(N<=10000)，验证4~N所有偶数是否符合哥德巴赫猜想：任一大于 2 的偶数都可写成两个质数之和。
  如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。例如 10 , 10=3+7=5+5，则 10=5+5 是错误答案。
*/

//https://www.luogu.com.cn/record/57347821

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool zs[10001]={0};
    for(int o=1;o<=10000;o++){
      int z=0;
      for(int m=1;m<=o;m++){
        if(o%m==0){
          z++;
        }
      }
      if(z==2){
        zs[o]=1;
      }
    }
    for(int i=4;i<=n;i+=2){
      for(int o=2;o<=n;o++){
        if(zs[o]==1&&zs[i-o]==1){
          cout<<i<<"="<<o<<"+"<<i-o<<endl;
          break;
        }
      }
    }
    return 0;
}