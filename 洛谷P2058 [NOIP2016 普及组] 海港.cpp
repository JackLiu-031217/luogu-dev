// Problem: P2058 [NOIP2016 普及组] 海港
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2058
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b[100001],p[100001],t=1,c[300000],ans=0;
    queue<int> boat;
    for(int i=1;i<=n;i++){
        cin>>b[i]>>p[i];
        while(b[i]-b[t]>=86400){
            for(int o=0;o<p[t];o++){
                if(c[boat.front()]==1){
                    ans--;
                }
                c[boat.front()]--;
                boat.pop();
            }
            b[t]=0;p[t]=0;
            t++;
        }
        for(int o=0;o<p[i];o++){
            int cc;
            cin>>cc;
            if(c[cc]==0){
                ans++;
            }
            c[cc]++;
            boat.push(cc);
        }
        cout<<ans<<endl;
    }
    return 0;
}