// Problem: B2135 单词替换
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/B2135
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int main(){
    string a[200],j,k;
    short b=0;
    do{
        cin>>a[b];
        b++;
    }while(getchar()==' ');
    cin>>j>>k;
    for(short c=0;c<b;c++){
        if(a[c]==j){
            a[c]=k;
        }
        cout<<a[c];
        if(c!=b-1) cout<<" ";
    }
    return 0;
}