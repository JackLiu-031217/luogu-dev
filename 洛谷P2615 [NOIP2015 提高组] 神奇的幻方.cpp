//P2615 [NOIP2015 提高组] 神奇的幻方
//https://www.luogu.com.cn/problem/P2615
//https://www.luogu.com.cn/record/75530446

#include<iostream>
using namespace std;
int hh[40][40],h[1522],l[1522];
int main(){
    int n;
    cin>>n;
    h[1]=1;
    l[1]=n/2+1;
    hh[1][n/2+1]=1;
    for(int i=2;i<=n*n;i++){
        if(h[i-1]==1){
            if(l[i-1]==n){
                h[i]=h[i-1]+1;
                l[i]=l[i-1];
            }else{
                h[i]=n;
                l[i]=l[i-1]+1;
            }
        }else{
            if(l[i-1]==n){
                h[i]=h[i-1]-1;
                l[i]=1;
            }else{
                if(hh[h[i-1]-1][l[i-1]+1]==0){
                    h[i]=h[i-1]-1;
                    l[i]=l[i-1]+1;
                }else{
                    h[i]=h[i-1]+1;
                    l[i]=l[i-1];
                }
            }
        }
        hh[h[i]][l[i]]=i;
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            cout<<hh[i][o]<<" ";
        }
        cout<<endl;
    }
    return 0;
}