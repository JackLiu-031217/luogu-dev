//洛谷OJ P1059 明明的随机数
//明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数(N<=100)，
//对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。
//然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
//https://www.luogu.com.cn/record/39385177
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int nc,n[101],c[101],cyn=0;
    cin>>nc;
    for(int i=0;i<nc;i++){
        int same=0;
        cin>>n[i];
        c[i]=n[i];
        for(int o=0;o<=i;o++){
            if(n[i]==c[o]){
                same++;
            }
        }
        if(same==1){
            cyn++;
        }else if(same!=1){
            c[i]=0;
        }
    }
    sort(c,c+nc);
    cout<<cyn<<endl;
    for(int i=0;i<nc;i++){
        if(c[i]==0){
            continue;
        }else cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}