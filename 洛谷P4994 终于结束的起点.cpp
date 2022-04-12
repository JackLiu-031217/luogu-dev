// Problem: P4994 终于结束的起点
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4994
// Memory Limit: 500 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=2,m;
    cin>>m;
    long long int a[3]={1,1};
    while(1){
        a[2]=(a[0]%m+a[1]%m)%m;
        //0 1 1 2 3 5 8 13 21 34 55 89 144 etc.
        //if m=2
        //0 1 1 0 1 1 0 1  1  0  1  1  0   etc.
        a[0]=a[1];
        a[1]=a[2];
        if((a[0]%m)==0&&(a[1]%m)==1){
            cout<<n<<endl;
            return 0;
        }
        n++;
    }
    return 0;
}