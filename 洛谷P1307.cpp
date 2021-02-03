/*-----------------------------------------------------/
  洛谷P1307 数字反转
  给定一个整数，请将该数各个位上数字反转得到一个新数。
  新数也应满足整数的常见形式，即除非给定的原数为零，
  否则反转后得到的新数的最高位数字不应为零（参见样例2）。
  以下是旧代码
  #include<iostream>
  #include<cstring>
  #include<cmath>
  using namespace std;
  int main(){
    string a;
    int i;
    cin>>a;
    if(a[0]=='-'){
        cout<<"-";
        for(i=a.length()-2;i>=1;i--){
            if(a[1]==0){
                a.erase(0,1);
            }
            cout<<a[i];
        }
    }else{
        for(i=a.length()-1;i>=0;i--){
            if(a[0]==0){
                a.erase(0,1);
            }
            cout<<a[i];
        }
    }
    return 0;
  }
/-----------------------------------------------------*/

//代码重构
#include<iostream>
using namespace std;
int main(){
    string num;
    int zero=0;
    cin>>num;
    if(num[0]=='-'){
        cout<<"-";
        zero=0;
        for(int i=num.size()-1;i>=1;i--){
            if(num[i]=='0'&&zero==0){ //为啥会有-592900000这种一串跟着N多个0的存在（
                continue;
            }else if(num[i]!='0'){
                zero=1;
            }
            cout<<num[i];
        }
        cout<<endl;
    }else{
        zero=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0'&&zero==0){
                continue;
            }else if(num[i]!=0){
                zero=1;
            }
            cout<<num[i];
        }
        cout<<endl;
    }
    return 0;
}