//P1094 [NOIP2007 普及组] 纪念品分组
//https://www.luogu.com.cn/problem/P1094

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int w,g,p[30001];
    cin>>w>>g;
    for(int i=1;i<=g;i++){
        cin>>p[i];
    }
    sort(p+1,p+1+g);

    //https://www.luogu.com.cn/blog/_post/2968
    int h=1,e=g,ans=0;
    while(h<=e){
        if(p[h]+p[e]<=w){
            ans++;
            h++;e--;
        }else{
            e--;ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}