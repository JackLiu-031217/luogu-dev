//P1101 单词方阵
//https://www.luogu.com.cn/problem/P1101
//https://www.luogu.com.cn/record/76001691

#include<iostream>
#include<deque>
using namespace std;
int main(){
    char alpbt[101][101];
    bool isyz[101][101];
    string yz="yizhong";
    int n,ans;
    cin>>n;
    for(int i=1;i<=n;i++){ //行
        for(int o=1;o<=n;o++){ //列
            cin>>alpbt[i][o];
        }
    }
    int y[8]={-1,-1,0,1,1,1,0,-1},x[8]={0,1,1,1,0,-1,-1,-1};
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            if(alpbt[i][o]=='y'){
                for(int p=0;p<8;p++){
                    if(alpbt[i+y[p]][o+x[p]]=='i'){
                        int c=0;
                        for(int l=2;l<=6;l++){
                            if(i+(y[p]*l)<1||i+(y[p]*l)>n||o+(x[p]*l)<1||o+(x[p]*l)>n) break;
                            //cerr<<i+(y[p]*l)<<" "<<o+(x[p]*l)<<endl;
                            else if(alpbt[i+(y[p]*l)][o+(x[p]*l)]==yz[l]){
                                c++;
                            }
                        }
                        //cerr<<c<<endl;
                        if(c==5){
                            isyz[i][o]=1;
                            isyz[i+y[p]][o+x[p]]=1;
                            for(int l=2;l<=6;l++)
                                isyz[i+(y[p]*l)][o+(x[p]*l)]=1;
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            //cout<<isyz[i][o]<<" ";
            if(isyz[i][o]){
                cout<<alpbt[i][o];
            }else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}