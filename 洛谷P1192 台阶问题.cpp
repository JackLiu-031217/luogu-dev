//P1192 台阶问题
//https://www.luogu.com.cn/problem/P1192
//https://www.luogu.com.cn/record/75900486

#include<iostream>
using namespace std;
int main(){
    int ans,n,k,nn[100001]={1,1};
    cin>>n>>k;
    for(int i=2;i<=n;i++){
        for(int o=1;o<=k;o++){
            if(i-o<0) break;
            nn[i]+=nn[i-o];
            nn[i]%=100003;
            //cerr<<nn[i]<<endl;
        }
    }
    cout<<nn[n]<<endl;
    return 0;
}