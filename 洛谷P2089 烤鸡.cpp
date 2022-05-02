// Problem: P2089 烤鸡
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2089
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int a[11],aa[10000][11],nn=0;
void dg(int n,int r){
    if(n==10){
        if(r<=3&&r>=1){
            a[n]=r;
            nn++;
            for(int i=1;i<=10;i++){
                aa[nn][i]=a[i];
            }
        }
        return;
    }
    for(int i=1;i<=3;i++){
        a[n]=i;
        dg(n+1,r-i);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    if(n<10||n>30){
        cout<<0<<endl;
        return 0;
    }
    dg(1,n);
    cout<<nn<<endl;
    for(int i=1;i<=nn;i++){
        for(int o=1;o<=10;o++){
            cout<<aa[i][o]<<" ";
        }
        cout<<endl;
    }
    return 0;
}