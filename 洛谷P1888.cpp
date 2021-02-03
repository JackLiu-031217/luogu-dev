//P1888 三角函数
//作者 Nekonata 入门级
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long minn,maxn;
    long long a,b,c;
    long long gcd (long long a,long long b);
    int gys;
    cin>>a>>b>>c;
    minn=a;
    if(b<minn)minn=b;
    if(c<minn)minn=c;
    maxn=a;
    if(b>maxn)maxn=b;
    if(c>maxn)maxn=c;
    for(gys=minn;gys>=1;gys--){
        if(minn%gys==0&&maxn%gys==0){
            minn/=gys;
            maxn/=gys;
            break;
        }
    }
    cout<<minn<<"/"<<maxn;
    return 0;
}