//P1720 月落乌啼算钱（斐波那契数列）
//https://www.luogu.com.cn/problem/P1720
//https://www.luogu.com.cn/record/75582655
//https://www.luogu.com.cn/record/75586017
//https://www.luogu.com.cn/record/75611582

#include<iostream>
using namespace std;
int main(){
    //1 1 2 3 5 8 13...
    long long int a=1,b=1,c=0,sum; //最后一个点的值貌似超出了普通 int (2^31-1) 的范围
    cin>>sum;
    if(sum==1||sum==2){
        cout<<"1.00"<<endl;
        return 0;
    }else{
        for(long long int i=3;i<=sum;i++){
            c=a+b;
            a=b;b=c;
        }
    }
    cout<<c<<".00"<<endl;
    return 0;
}