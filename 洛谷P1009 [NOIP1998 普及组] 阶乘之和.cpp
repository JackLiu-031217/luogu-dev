// Problem: P1009 [NOIP1998 普及组] 阶乘之和
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1009
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/33759858 2021/5/21 50
//https://www.luogu.com.cn/record/33768149 2021/5/21 50
//https://www.luogu.com.cn/record/76371123 2022/5/25 AC

#include<iostream>
using namespace std;
int main(){
    int a=1,aa[20000]={1},ans[20000]={1},n,w=0,wa=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int o=0;o<=w;o++){
            aa[o]*=i;
        }
        //int aaa=0;
        for(int aaa=0;aaa<=w;aaa++){ //高精乘法
        //while(aaa<=w){
            if(aa[aaa]>=10){
                aa[aaa+1]+=aa[aaa]/10;
                aa[aaa]%=10;
                if(aaa==w){
                    w++;
                }
            }
            //aaa++;
        }
        wa=max(wa,w);
        for(int i=0;i<=wa;i++){ //高精加法
             ans[i]+=aa[i];
             if(ans[i]>=10){
                 ans[i+1]+=ans[i]/10;
                 ans[i]%=10;
                 if(i==wa){
                     wa++;
                 }
             }
        }
    }
    for(int o=wa;o>=0;o--){
        cout<<ans[o];
    }
    cout<<endl;
    return 0;
}