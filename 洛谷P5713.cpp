//P5713 【深基3.例5】洛谷团队系统
//深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    int local,luogu,i;
    cin>>i;
    local=5*i;
    luogu=11+(3*i);
    if(local<luogu){
        cout<<"Local";
    }else{
        cout<<"Luogu";
    }
    return 0;
}