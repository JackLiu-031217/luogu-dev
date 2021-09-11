/*
  P1179 [NOIP2010 普及组] 数字统计
  https://www.luogu.com.cn/problem/P1179

  请统计某个给定范围[L,R]的所有整数中，数字 2 出现的次数。

  比如给定范围[2,22]，数字22 在数 2中出现了 1 次，在数12 中出现 1 次，
  在数 20 中出现 1 次，在数 21 中出现 1 次，在数 22 中出现 2 次，所以数字 2 在该范围内一共出现了 6次。
*/

//https://www.luogu.com.cn/record/57239444

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char n[6];
    int m;
    cin>>m;
    int mm=m,mmm;
    cin>>mmm;
    for(int i=5;i>=0;i--){
        if(i!=0){
            int nn=m/(pow(10,i)); //pow = ^
            n[i]='0'+nn;
            m=fmod(m,pow(10,i)); //fmod = %
        }else{
            n[0]='0'+m;
        }
    }
    int ans=0;
    for(int i=mm;i<=mmm;i++){
        for(int o=0;o<=5;o++){
            if(n[o]>'9'){
                n[o]='0';
                n[o+1]++;
            }
        }
        for(int o=0;o<=5;o++){
            if(n[o]=='2'){
                ans++;
            }
        }
        n[0]++;
    }
    cout<<ans<<endl;
    return 0;
}