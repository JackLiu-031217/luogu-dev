#include<iostream>
using namespace std;
int main(){
    long long a,b,c=0,d,x;
    cin>>a>>b;
    for(d=1;d<=a;d++){
        x=d; //数据复制
        while(x){ //while值一定要注意是x的值，而并非x与10的余数
            if(x%10==b){
                c++;
            }
            x/=10;
        }
    }
    cout<<c;
}