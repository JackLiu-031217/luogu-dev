/*-------------------------------------
    P1031 [NOIP2002 提高组] 均分纸牌
        NOIP 2002 提高组第一题
--------------------------------------*/
//https://www.luogu.com.cn/problem/P1031
//https://www.luogu.com.cn/record/47010311
#include<iostream>
using namespace std;
int main(){
    int n; //纸牌堆数
    cin>>n;
    int p[n]; //每一堆纸牌包含的纸牌数目
    int z=0; //纸牌总数
    int ans=0; //移动次数
    for(int i=1;i<=n;i++){
        cin>>p[i];
        z+=p[i];
    }
    z/=n;

    //以下部分主要架构来自于 https://www.luogu.com.cn/blog/user262/solution-p1031
    //感谢前辈 谁懂谁伤心 于 2013-11-22 发布的题解
    //前辈的智慧不可小视
    //本人的程序性思维还有待提升
    
    for(int i=1;i<=n;i++){
        p[i]-=z;
    }

    for(int i=1;i<=n;i++){
        if(p[i]==0){
            continue;
        }
        p[n+1]+=p[i];
        ans++;
    }
    cout<<ans;
    return 0;
}