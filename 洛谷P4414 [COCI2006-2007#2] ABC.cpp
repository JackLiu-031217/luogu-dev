// Problem: P4414 [COCI2006-2007#2] ABC
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4414
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++){
        char b;
        cin>>b;
        cout<<a[b-'A']<<" ";
    }
    cout<<endl;
    return 0;
}