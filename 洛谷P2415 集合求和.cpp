//P2415 集合求和
//https://www.luogu.com.cn/problem/P2415

//https://www.luogu.com.cn/record/87862669
//https://www.luogu.com.cn/record/87862695

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=0,h=0,tmp;
    while(cin>>tmp){
        h+=tmp;
        n++;
    }
    long long int ans=h*pow(2,n-1); //这一行必须指定
    cout<<ans<<endl; //上面那行不指定变量而直接用cout输出会喜提科学计数法输出结果一行
    //printf("%lld\n",ans); //而在printf里试图直接输出h*pow(2,n-1)则会喜提249644974080变4777492371896008704的绝佳答案
    return 0;
}