#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    int maxx,minn,a[1001],num,i;
    cin>>num;
    for(i=1;i<=num;i++){
        cin>>a[i];
    }
    minn=a[1];
    maxx=a[1];
    for(i=2;i<=num;i++){
        if(a[i]<minn){
            minn=a[i];
        }
        if(a[i]>maxx){
            maxx=a[i];
        }
    }
    cout<<maxx-minn<<endl;
    return 0;

}