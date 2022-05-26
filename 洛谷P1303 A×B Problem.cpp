// Problem: P1303 A*B Problem
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1303
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/39282081  20 不详
//https://www.luogu.com.cn/record/76417190  0  没整 0 的特判
//以下 0 分原因详见下文
//https://www.luogu.com.cn/record/76417270  0
//https://www.luogu.com.cn/record/76417420  0
//https://www.luogu.com.cn/record/76417492  0
//https://www.luogu.com.cn/record/76417678  0
//https://www.luogu.com.cn/record/76417817  100

#include<iostream>
using namespace std;
int a[20000],b[20000],c[40000];
int main(){
    string aa,bb;
    cin>>aa;
    cin>>bb;

    //以下内容导致了查错失败
    //原因不明
    //getline(cin,aa);
    //getline(cin,bb);

    if(aa=="0"||bb=="0"){
        cout<<0<<endl;
        return 0;
    }
    int aaa=aa.length(),bbb=bb.length();
    for(int i=aaa-1;i>=0;i--){
        a[aaa-i]=aa[i]-'0';
    }
    for(int i=bbb-1;i>=0;i--){
        b[bbb-i]=bb[i]-'0';
    }
    for(int i=1;i<=aaa;i++){
        for(int o=1;o<=bbb;o++){
            c[i+o-1]+=a[i]*b[o]; //乘法竖式模拟
        }
    }
    for(int i=1;i<=aaa+bbb;i++){
        if(c[i]>=10){
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    int d=aaa+bbb;
    while(c[d]==0&&d>=1){
        d--;
        cerr<<d<<endl;
    }
    for(int i=d;i>=1;i--){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}