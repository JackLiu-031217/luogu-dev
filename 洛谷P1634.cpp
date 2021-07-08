/*----------------------/
    P1634 禽兽的传染病
/----------------------*/
//https://www.luogu.com.cn/problem/P1634

//禽兽患传染病了。一个禽兽会每轮传染 x 个禽兽。试问 n 轮传染后有多少禽兽被传染？
//保证 x,n 以及答案都在 64 位无符号整数的表示范围内。

//https://www.luogu.com.cn/record/34977422
//https://www.luogu.com.cn/record/52601826
//https://www.luogu.com.cn/record/52602287

#include<iostream>
using namespace std;
int main(){
    unsigned long long i=1,m,n;
    cin>>m>>n;
    for(int o=1;o<=n;o++){
        i+=i*m;
    }
    cout<<i;
    return 0;
}