// Problem: P1706 全排列问题
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1706
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//有关深度优先搜索(DFS)
//https://oi.wiki/search/dfs/
//差点绕死(

#include<iostream>
#include<iomanip>
using namespace std;
int n,a[10];
bool l[10];
void dfs(int s){
    if(s>n){
        for(int i=1;i<=n;i++){
            cout<<setw(5)<<a[i];
        }
        cout<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(l[i]==0){
            l[i]=1;
            a[s]=i;
            dfs(s+1);
            l[i]=0;
        }
    }
    return;
}
int main(){
    cin>>n;
    dfs(1);
    return 0;    
}