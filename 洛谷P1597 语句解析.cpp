//P1597 语句解析
//https://www.luogu.com.cn/problem/P1597

//条件写死了是好做……
//假如，我是说假如，有一道题让给多位数赋值……那可真是一道好题……
//https://www.luogu.com.cn/record/87683311

#include<iostream>
using namespace std;
int n[3];
string cc;
int main(){
    cin>>cc;
    for(int i=0;i<cc.length();i++){
        if(cc[i]=='='){
            int op=cc[i-2]-'a';
            n[op]=cc[i+1]>='0'&&cc[i+1]<='9'?cc[i+1]-'0':n[cc[i+1]-'a'];
        }
    }
    printf("%d %d %d\n",n[0],n[1],n[2]);
    return 0;
}