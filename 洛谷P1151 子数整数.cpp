/*-------------------------------------------/
                P1151 子数整数       
    https://www.luogu.com.cn/problem/P1151
/-------------------------------------------*/

/*
  对于一个五位数a1a2a3a4a5，可将其拆分为三个子数：
  sub1=a1a2a3
  sub2=a2a3a4
  sub3=a3a4a5
  例如，五位数20207可以拆分成
  sub1=202
  sub2=020(=20)
  sub3=207
  现在给定一个正整数K，要求你编程求出10000到30000之间所有满足下述条件的五位数，
  条件是这些五位数的三个子数sub1,sub2,sub3都可被K整除。
*/

//https://www.luogu.com.cn/record/55255820 (忽略了无解时的No输出)
//https://www.luogu.com.cn/record/55255846

#include<iostream>
using namespace std;
int main(){
    int in;
    cin>>in;
    char num[5]={'1','0','0','0','0'};
    int m=0;
    for(int i=10000;i<=30000;i++){
        for(int o=4;o>=0;o--){
            if(num[o]>'9'){
                num[o-1]++;
                num[o]='0';
            }
        }
        int fd=0;
        for(int o=0;o<=2;o++){
            int n=0;
            n+=((num[o]-'0')*100)+((num[o+1]-'0')*10)+(num[o+2]-'0');
            if(n%in==0){
                fd++;
            }
        }
        if(fd==3){
            cout<<i<<endl;
            m++;
        }
        num[4]++;
    }
    if(m==0){
        cout<<"No"<<endl;
    }
    return 0;
}