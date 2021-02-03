//----------------------------------------/
//洛谷OJ P1420 最长连号
//输入 n 个正整数，要求输出最长的连号的长度。
//连号指从小到大连续自然数。
//旧代码
/*#include<iostream>
  #include<algorithm>
  #include<cmath>
  #include<cstring>
  using namespace std;
  int main(){
    int i,j,a[10000],countnum=0;
    cin>>i;
    cin>>a[1];
    for(j=2;j<=i;j++){
        cin>>a[j];
        if((a[j-1])+1==a[j]){
            countnum++;
        }else if((a[j-1]+1!=a[j])){
            countnum=0;
        }
    }
    cout<<countnum<<endl;
    return 0;
  }
*///--------------------------------------/

//重构
//提交的时候记得删掉静态debug的码
#include<iostream>
using namespace std;
int main(){
    int num[10000],total,maxx=1,lian=1; //num[]:1<=n<=10^4
    cin>>total;
    for(int i=1;i<=total;i++){
        cin>>num[i];
        if(i!=1){
            if(num[i]==num[i-1]+1){
                lian++;
                if(lian>maxx){
                    maxx=lian;
                }
            }else{
                lian=1;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}
