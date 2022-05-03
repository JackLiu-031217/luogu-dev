//P5461 赦免战俘
//https://www.luogu.com.cn/problem/P5461
//https://www.luogu.com.cn/record/75040808

#include<iostream>
using namespace std;
bool c[1025][1025];
int nn=1;
void shm(int h,int l,int nnn){
    if(nnn/2==0){
        return;
    }
    for(int i=0;i<nnn/2;i++){
        for(int o=0;o<nnn/2;o++){
            c[h+i][l+o]=0;
        }
    }
    shm(h+(nnn/2),l,nnn/2);
    shm(h,l+(nnn/2),nnn/2);
    shm(h+(nnn/2),l+(nnn/2),nnn/2);
    return;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        nn*=2;
    }
    for(int i=1;i<=nn;i++){
        for(int o=1;o<=nn;o++){
            c[i][o]=1;
        }
    }
    shm(1,1,nn);
    for(int i=1;i<=nn;i++){
        for(int o=1;o<=nn;o++){
            cout<<c[i][o]<<" ";
        }
        cout<<endl;
    }
    return 0;
}