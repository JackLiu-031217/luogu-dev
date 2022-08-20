//P1011 [NOIP1998 提高组] 车站
//https://www.luogu.com.cn/problem/P1011

//Tag: 数学,斐波那契,Fibonacci,NOIp 提高组,1998
//有参考: https://hennessey-venom.blog.luogu.org/solution-p1011
//https://www.luogu.com.cn/record/84497451

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,n,m,x;
    cin>>a>>n>>m>>x;
    if(x<=2){
        cout<<a<<endl;
        return 0;
    }
    if(x==n){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<=m;i++){ //因为没说第二辆车上、下了几个人，遂递归
        int sc[21]={a,i},car[21]={a,a};
        for(int i=2;i<n-1;i++){
            car[i]=car[i-1]+sc[i-1]+sc[i-2];
            car[i]-=sc[i-1];
            sc[i]=sc[i-1]+sc[i-2];
        }
        if(car[n-2]==m){
            cout<<car[x-1]<<endl;
            return 0;
        }
    }
    return 0;
}