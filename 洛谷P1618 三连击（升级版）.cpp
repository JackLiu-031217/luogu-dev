// Problem: P1618 三连击（升级版）
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1618
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*
  https://www.luogu.com.cn/record/74643628
  #2:Wrong Answer.wrong answer Too short on line 1.
  #3:Wrong Answer.wrong answer Too short on line 1.
  Reason: 若无解，输出 No!!!
  
  https://www.luogu.com.cn/record/74643690 ac*5
*/

#include<iostream>
using namespace std;
bool n[10],yessssss=0;
int nn[3][3];
double a,b,c;
void f(int q,int w){ //第q个数,w位
    if(q>2){
        /*debug
        for(int i=0;i<3;i++){
            for(int o=0;o<3;o++){
                cout<<nn[i][o];
            }
            cout<<endl;
        }
        */
        double aa[3];
        for(int i=0;i<3;i++){
            aa[i]=nn[i][0]*100+nn[i][1]*10+nn[i][2];
        }
        if(aa[0]/aa[1]==a/b && aa[0]/aa[2]==a/c && aa[1]/aa[2]==b/c){
            yessssss=1;
            for(int i=0;i<3;i++){
                cout<<aa[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int i=1;i<=9;i++){
        if(n[i]==0){
            n[i]=1;
            nn[q][w]=i;
            if(w==2){
                f(q+1,0);
            }else f(q,w+1);
            n[i]=0;
        }
    }
    return;
}
int main(){
    cin>>a>>b>>c;
    f(0,0);
    if(yessssss==0){
        cout<<"No!!!"<<endl;
    }
    return 0;
}