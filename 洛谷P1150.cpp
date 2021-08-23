/*---------------------------------------
            P1150 Peter的烟
  https://www.luogu.com.cn/problem/P1150
  ---------------------------------------
  Peter 有 n 根烟，他每吸完一根烟就把烟蒂保存起来，
  k(k>1)个烟蒂可以换一个新的烟，
  那么 Peter 最终能吸到多少根烟呢？
  吸烟有害健康。
*/

//https://www.luogu.com.cn/record/56747627

#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    //"此解法为小学4~6年级水平"
    //Source: https://www.luogu.com.cn/blog/user37001/solution-p1150
    cout<<n+(n-1)/(k-1);
    //我上了个假小学（划掉
    return 0;
}