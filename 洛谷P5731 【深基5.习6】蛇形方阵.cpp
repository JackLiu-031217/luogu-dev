// Problem: P5731 【深基5.习6】蛇形方阵
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P5731
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<iomanip>
using namespace std;
int s[10][10];

//TRUE SIMULATE XD
//https://www.luogu.com.cn/record/74693700

int main(){
    int n,c,a=1,l=0,ll=0;
    cin>>n;
    c=n-1;
    while(a<n*n){
        for(int i=0;i<c;i++){
            s[l][ll]=a;
            a++;
            ll++;
        }
        for(int i=0;i<c;i++){
            s[l][ll]=a;
            a++;
            l++;
        }
        for(int i=0;i<c;i++){
            s[l][ll]=a;
            a++;
            ll--;
        }
        for(int i=0;i<c;i++){
            s[l][ll]=a;
            a++;
            l--;
        }
        l++;ll++;
        c-=2;
    }
    if(n%2==1){
        s[l][ll++]=a++;
    }
    for(int i=0;i<n;i++){
        for(int o=0;o<n;o++){
            cout<<setw(3)<<s[i][o];
        }
        cout<<endl;
    }
    return 0;
}