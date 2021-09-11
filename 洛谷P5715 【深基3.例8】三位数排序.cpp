//P5715 【深基3.例8】三位数排序
//深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3); //sort是好东西（
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
    return 0;
}