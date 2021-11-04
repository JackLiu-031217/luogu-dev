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