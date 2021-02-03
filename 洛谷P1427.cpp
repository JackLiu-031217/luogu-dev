//https://www.luogu.com.cn/problem/P1427
//https://www.luogu.com.cn/record/34482122
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    unsigned int num[100];
    int count,tnouc;
    for(count=0;;count++){
        cin>>num[count];
        if(num[count]==0){
            break;
        }
    }
    tnouc=count-1;
    for(;tnouc>=0;tnouc--){
        cout<<num[tnouc]<<" ";
    }
    return 0;
}