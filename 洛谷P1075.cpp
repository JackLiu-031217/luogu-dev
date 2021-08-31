//P1075 [NOIP2012 普及组] 质因数分解
//https://www.luogu.com.cn/problem/P1075

//已知正整数 n 是两个不同的质数的乘积，试求出两者中较大的那个质数。

//https://www.luogu.com.cn/record/57292493

#include<iostream>
using namespace std;
int main(){
    unsigned long long n;
    cin>>n;
    for(unsigned long long i=2;i<=n;i++){
        if(n%i==0){
            cout<<n/i<<endl;
            return 0;
        }
    }
}