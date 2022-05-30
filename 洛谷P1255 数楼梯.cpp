// Problem: P1255 数楼梯
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1255
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76663782
//https://www.luogu.com.cn/record/76676675

#include<iostream>
using namespace std;
int n,nn[5001][5001],ww[5001],aw,ans[5001];
int main(){
    nn[1][0]=1;
    nn[2][0]=2;
    cin>>n;
    for(int i=3;i<=n;i++){
        int w=ww[i-1];
        for(int o=0;o<=w;o++){
            nn[i][o]+=nn[i-1][o]+nn[i-2][o];
            if(nn[i][o]>=10){
                nn[i][o+1]+=nn[i][o]/10;
                nn[i][o]%=10;
                w=max(w,o+1);
            }
        }
        ww[i]=max(w,ww[i]);
    }
    for(int o=ww[n];o>=0;o--){
        cout<<nn[n][o];
    }
    cout<<endl;
    return 0;
}