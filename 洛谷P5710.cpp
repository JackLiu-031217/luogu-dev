//P5710 【深基3.例2】数的性质
//深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    if(i%2==0&&(i>4&&i<=12)){
        cout<<"1 ";
    }else{
        cout<<"0 ";
    }
    if(i%2==0||(i>4&&1<=12)){
        cout<<"1 ";
    }else{
        cout<<"0 ";
    }
    if(i%2==0^(i>4&&1<=12)){
        cout<<"1 ";
    }else{
        cout<<"0 ";
    }
    if(i%2!=0&&(i<4||1>12)){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}