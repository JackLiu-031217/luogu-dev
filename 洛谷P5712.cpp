//P5712 【深基3.例4】Apples
//深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=0&&a<=1){
        cout<<"Today, I ate "<<a<<" apple.";
    }else if(a>=2){
        cout<<"Today, I ate "<<a<<" apples.";
    }
    return 0;
}