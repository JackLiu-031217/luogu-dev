//字符串水题
//但是记不住咋用
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string i;
    cin>>i;
    for(int a=0;a<=i.length();a++){
        if(i[a]>='a' && i[a]<='z'){
            cout<<char(i[a]-32);
        }else cout<<char(i[a]);
    }
    return 0;
} 