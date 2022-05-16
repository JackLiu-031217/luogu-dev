//P3741 honoka的键盘
//https://www.luogu.com.cn/problem/P3741
//https://www.luogu.com.cn/record/75864898
//https://www.luogu.com.cn/record/75864973
//https://www.luogu.com.cn/record/75865183
//https://www.luogu.com.cn/record/75865477

#include<iostream>
using namespace std;
int main(){
    string a;
    int ans=0,n;
    cin>>n;
    cin>>a;
    for(int i=0;i<a.length()-1;i++){
        if(a[i]=='V'&&a[i+1]=='K'){
            ans++;
            a[i]='\0';
            a[i+1]=a[i];
        }
    }
    for(int i=0;i<a.length()-1;i++){
        if(a[i]==a[i+1]&&a[i]!='\0'){
            ans++;
            break;
        }
    }
    //cout<<a<<endl;
    cout<<ans<<endl;
    return 0;
}