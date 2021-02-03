#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    //这是非倒叙的情况
    //非常完美
    //可惜需要倒过来输出（
    /*
    int num;
    cin>>num;
    if(num==1){
        cout<<"1";
    }else{
        while(num!=1){
            cout<<num<<" ";
            if(num%2==1){
                num*=3;
                num+=1;
            }else if(num%2==0){
                num/=2;
            }
        }
        cout<<"1";
    }
    */
    int num[10000],i,n;
    cin>>num[0];
    if(num[0]==1){
        cout<<"1";
        return 0;
    }else{
        for(i=1;;i++){
            if(num[i-1]==1){
                num[i]=num[n-1]*3;
                num[i]+=1;
            }else if(num[i-1]==0){
                num[i]=num[i-1]/2;
            }else if(num[i]==1){
                n=i;
                break;
            }
        }
    }
    for(;i>=0;i--){
        cout<<num[i]<<" ";
    }
    return 0;
}