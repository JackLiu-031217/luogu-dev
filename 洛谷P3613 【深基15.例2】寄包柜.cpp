// Problem: P3613 【深基15.例2】寄包柜
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P3613
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
using namespace std;
struct{
    vector<int> a,b;
    int n=0;
}p[100001];
int main(){
    int n,q;
    cin>>n>>q;
    for(long long int i=1;i<=q;i++){
        int a;
        cin>>a;
        if(a==1){
            int b,c,d;
            cin>>b>>c>>d;
            //https://oi-wiki.org/lang/csl/sequence-container/#vector_5
            p[b].n++;
		    p[b].a.push_back(c); 
		    p[b].b.push_back(d);
        }else{
            int b,c;
            cin>>b>>c;
            for(int i=p[b].n-1;i>=0;i--){
                if(p[b].a[i]==c){
                    cout<<p[b].b[i]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}