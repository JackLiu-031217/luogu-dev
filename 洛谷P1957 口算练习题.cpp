//P1957 口算练习题
//https://www.luogu.com.cn/problem/P1957
//https://www.luogu.com.cn/record/75851363

#include<iostream>
#include<cctype> //isalpha()
#include<cstdlib> //atoi()
using namespace std;
int getw(int n){
    int w=1;
    if(n<0) w++;
    while(n/10!=0){
        n/=10;
        w++;
    }
    return w;
}
int main(){
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        char k[5];int a,b,c,ww;
        cin>>k;
        if(isalpha(k[0])){
            m=k[0];
            cin>>a>>b;
        }else{
            //cerr<<"not alpha"<<endl;
            a=atoi(k);
            cin>>b;
        }
        //cerr<<"a="<<a<<", b="<<b<<endl;
        switch(m){
            case 'a':{
                c=a+b;
                cout<<a<<"+"<<b<<"="<<c<<endl;
                break;
            }
            case 'b':{
                c=a-b;
                cout<<a<<"-"<<b<<"="<<c<<endl;
                break;
            }
            case 'c':{
                c=a*b;
                cout<<a<<"*"<<b<<"="<<c<<endl;
                break;
            }
        }
        cout<<getw(a)+getw(b)+getw(c)+2<<endl;
    }
    return 0;
}