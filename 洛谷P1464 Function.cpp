//P1464 Function
//https://www.luogu.com.cn/problem/P1464
//https://www.luogu.com.cn/record/75111555 RE*5 数组访问越界
//https://www.luogu.com.cn/record/75141825
#include<iostream>
using namespace std;
int n[21][21][21];
int f(long long int a,long long int b,long long int c){
    if(a<=0||b<=0||c<=0){
        return 1;
    }
    if(a>20||b>20||c>20){
        a=20;b=20;c=20;
    }
    if(n[a][b][c]==0){
        if(a<b&&b<c){
            n[a][b][c]=f(a,b,c-1)+f(a,b-1,c-1)-f(a,b-1,c);
        }
        n[a][b][c]=f(a-1,b,c)+f(a-1,b-1,c)+f(a-1,b,c-1)-f(a-1,b-1,c-1);
    }
    return n[a][b][c];
}
int main(){
    while(1){
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1){
            break;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<f(a,b,c)<<endl;
    }
    return 0;
}