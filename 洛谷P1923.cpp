//P1923 【深基9.例4】求第 k 小的数
//输入n(n<5000000且n为奇数)个数字a_i(0<a_i<10^9)，输出这些数字的第 k 小的数。最小的数是第 0 小。
//https://www.luogu.com.cn/record/36585489 AC AC AC TLE TLE
//https://www.luogu.com.cn/record/37638275 AC AC AC AC AC
#include<iostream>
#include<algorithm>         //nth_element依赖文件
using namespace std;
int main(){
    ios::sync_with_stdio(0); //cin / cout 加速神器
    int a[5000010],n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    nth_element(a,a+k,a+n); //nth_element:求区间第k小的
    cout<<a[k]<<endl;
    return 0;
}