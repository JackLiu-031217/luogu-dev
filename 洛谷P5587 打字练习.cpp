// Problem: P5587 打字练习
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P5587
// Memory Limit: 500 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<deque>
//https://zh.cppreference.com/w/cpp/container/deque
//https://oi-wiki.org/lang/csl/sequence-container/#deque
#include<string>
using namespace std;
int main(){
    deque<char> a[10000];
    string s;
    int sn=0;
    while(1){
        //bool h=1;
        getline(cin,s);
        if(s=="EOF"){
            break;
        }
        for(unsigned long long int i=0;i<s.length();i++){
            if(s[i]=='<'){
                //if(h){
                if(a[sn].empty())
                    continue;
                }else{
                    a[sn].pop_back();
                }
            }else{
                a[sn].push_back(s[i]);
                //h=0;
            }
        }
        sn++;
    }
    int w=0,sm=0;
    while(1){
        //bool h=1;
        deque<char> b;
        getline(cin,s);
        if(s=="EOF"){
            break;
        }
        if(sm>sn){
            continue;
        }
        for(unsigned long long int o=0;o<s.length();o++){
            if(s[o]=='<'){
                //if(h){
                if(b.empty()){
                    continue;
                }else{
                    b.pop_back();
                }
            }else{
                b.push_back(s[o]);
                //h=0;
            }
        }
        while(a[sm].empty()!=1){
            if(b.empty()){
                break;
            }
            if(a[sm].front()==b.front()){
                w++;
            }
            a[sm].pop_front();
            b.pop_front();
        }
        sm++;
    }
    double se;
    cin>>se;
    cout<<(int)(w*60.0/se+0.5)<<endl;
    return 0;
}