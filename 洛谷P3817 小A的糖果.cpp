//P3817 小A的糖果
//https://www.luogu.com.cn/record/62091652

#include<iostream>
//#include<fstream>
using namespace std;
int main(){
    //freopen("P3817_2.in","r",stdin);
    long long int n,x,b,ans=0;
    cin>>n>>x>>b;
    for(long long int i=1;i<n;i++){
        int q;
        cin>>q;
        if(q>x){
            ans+=q-x;
            q=x;
        }
        if(q+b>x){
            ans+=q+b-x;
            q-=q+b-x;
            if(q<0) q=0;
        }
        b=q;
    }
    cout<<ans<<endl;
    return 0;
}