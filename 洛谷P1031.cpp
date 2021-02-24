/*-------------------------------------
    P1031 [NOIP2002 提高组] 均分纸牌
        NOIP 2002 提高组第一题
--------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int n; //纸牌堆数
    int p[101]; //每一堆纸牌包含的纸牌数目
    int z=0; //纸牌总数
    for(int i=1;i<=n;i++){
        cin>>p[i];
        z+=p[i];
    }
    int pj=z/n;
    for(int i=1;i<=n;i++){
        if(i==1){
            if(p[1]<pj){
                p[2]-=pj-p[1];
                p[1]=pj;
            }else if(p[1]>pj){
                p[2]+=p[1]-pj;
                p[1]=pj;
            }else if(p[1]==pj){
                continue;
            }
        }
        if(i==n){
            if(p[n]>pj){
                p[n-1]+=p[n]-pj;
                p[n]=pj;
                i=1;
            }else if(p[n]<pj){
                p[n-1]-=pj-p[n];
                p[n]=pj;
                i=1;
            }else if(p[n]==pj){
                i=1;
            }
        }
    }
}