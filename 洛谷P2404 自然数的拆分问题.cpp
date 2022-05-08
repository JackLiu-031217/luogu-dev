//P2404 自然数的拆分问题
//TAG: 搜索
//https://www.luogu.com.cn/problem/P2404
//https://www.luogu.com.cn/record/75408945

#include<iostream>
using namespace std;
int a[9];
void s(int st,int n,int r){
    if(r==0){
        if(st==2) return; //防止输出单数状况出现
        for(int i=1;i<st-1;i++){
            cout<<a[i]<<"+";
        }
        cout<<a[st-1]<<endl;
        return;
    }
    for(int i=n;i<=r;i++){
        if(r-i<0){
            break;
        }
        a[st]=i;
        s(st+1,i,r-i);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    s(1,1,n);
    return 0;
}