//P2181 对角线
//Author slzxxjd
//抄的（嚣张
#include<bits/stdc++.h>
long long a1[100000];
long long a2[100000];
long long a3[100000];
int main()
{
    long long n;
    scanf("%lld",&n);
    int t=0;
    for(int i=1;i<=n;i++)
    {
        a1[i]=a1[i-1]+i;//这里生成1,3,6,10序列
    }
    for(int i=1;i<=n;i++)
    {
        a2[i]=a2[i-1]+a1[i];//这里生成1,4,10,20序列
    }
    for(int i=1;i<=n;i++)
    {
        a3[i]=a3[i-1]+a2[i];//这里生成答案序列：1,5,15,35
    }
    printf("%lld",a3[n-3]);
    return 0;
}