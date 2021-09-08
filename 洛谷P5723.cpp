/*
    P5723 【深基4.例13】质数口袋
    https://www.luogu.com.cn/problem/P5723

    小 A 有一个质数口袋，里面可以装各个质数。他从 2 开始，依次判断各个自然数是不是质数，如果是质数就会把这个数字装入口袋。
    口袋的负载量就是口袋里的所有数字之和。但是口袋的承重量有限，不能装得下总和超过 L（1<=L<=10^5）的质数。
    给出 L，请问口袋里能装下几个质数？
    将这些质数从小往大输出，然后输出最多能装下的质数个数，所有数字之间有一空行。
*/

#include<iostream>
using namespace std;
int main(){
    unsigned int n,ans=0,cnt=0;
    cin>>n;
    for(int i=2;i<=100000;i++){
        int z=0;
        for(int o=2;o<=i;o++){
            if(i%o==0){
                z++;
            }
        }
        if(z==1){
            ans+=i;
            if(ans<=n){
                cout<<i<<endl;
                cnt++;
            }else break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}