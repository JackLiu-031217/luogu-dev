//P1321 单词覆盖还原
//https://www.luogu.com.cn/problem/P1321
//https://www.luogu.com.cn/record/75875425
//https://www.luogu.com.cn/record/75875478

#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    string n;
    cin>>n;
    for(long long int i=0;i<n.length()-2;i++){
        if(n[i]=='b'||n[i+1]=='o'||n[i+2]=='y'){
            a++;
        }
        if(n[i]=='g'||n[i+1]=='i'||n[i+2]=='r'||n[i+3]=='l'){
            b++;
        }
    }
    cout<<a<<endl<<b<<endl;
    return 0;
}