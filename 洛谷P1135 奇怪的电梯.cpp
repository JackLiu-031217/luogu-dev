//P1135 奇怪的电梯
//https://www.luogu.com.cn/problem/P1135
//https://www.luogu.com.cn/record/76276857 40
//https://www.luogu.com.cn/record/76277091 70
//https://www.luogu.com.cn/record/76277091 80
//https://www.luogu.com.cn/record/76277279 90
//https://www.luogu.com.cn/record/76277318 删掉了一个没多大用还费时间的“全标记”检测

#define MINT 2147483647
#include<iostream>
using namespace std;
int n,a,b,nn[201],ans=MINT;
bool fs[201];
void dt(int aa,int bb){
    if(bb>ans) return;
    if(aa==b){
        if(bb<ans){
            ans=bb;
        }
        return;
    }
    if(aa>=1&&aa<=n){
        if(fs[aa]!=1){
            fs[aa]=1;
            dt(aa+nn[aa],bb+1);
            dt(aa-nn[aa],bb+1);
            fs[aa]=0;
        }
    }
    return;
}
int main(){
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>nn[i];
    }
    dt(a,0);
    if(ans!=MINT) cout<<ans<<endl;
    else cout<<"-1"<<endl;
    return 0;
}