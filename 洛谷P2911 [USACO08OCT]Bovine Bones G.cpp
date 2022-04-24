// Problem: P2911 [USACO08OCT]Bovine Bones G
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2911
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int t[81];
int main(){
    int a,b,c,ans;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++){
        for(int o=1;o<=b;o++){
            for(int p=1;p<=c;p++){
                t[i+o+p]++;
            }
        }
    }
    int tm=0;
    for(int i=1;i<=80;i++){
        if(t[i]>tm){
            tm=t[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}