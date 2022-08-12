//P1226 【模板】快速幂||取余运算
//https://www.luogu.com.cn/problem/P1226
//https://www.luogu.com.cn/record/83507119

#include<iostream>
using namespace std;
unsigned long long int ans,aa,bb;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    ans=1,aa=a,bb=b;
    while(bb!=0){
        if(bb%2==1){
            ans=(ans%c)*(aa%c)%c; //边除边模
        }
        aa=aa*aa%c;
        bb/=2;
    }
    printf("%d^%d mod %d=%d\n",a,b,c,ans); //这次应该是自己第一次用printf
    return 0;
}

//参考文献：
//[^1]: 学委(https://www.luogu.com.cn/user/49474)《快速幂和取余运算》, 2018-08-28
//      https://www.luogu.com.cn/blog/cicos/quickpow
//[^2]: 龙啸空(https://www.luogu.com.cn/user/62600)《题解 P1313 【计算系数】》, 2018-10-30
//      https://www.luogu.com.cn/blog/longxiaokong-de-blog/solution-p1226 