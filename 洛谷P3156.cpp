//P3156 【深基15.例1】询问学号
//题目提供者 深入浅出
//难度 入门
//https://www.luogu.com.cn/problem/P3156

//有 n(n <= 2 * 10^6) 名同学陆陆续续进入教室。我们知道每名同学的学号（在 1 到 10^9 之间），按进教室的顺序给出。
//上课了，老师想知道第 i 个进入教室的同学的学号是什么（最先进入教室的同学 i=1），询问次数不超过 10^5 次。

//https://www.luogu.com.cn/record/51603358 输出格式错误
//https://www.luogu.com.cn/record/51603385 输出格式错误
//https://www.luogu.com.cn/record/51603398

#include<iostream>
using namespace std;
long long a[2000001]; //谨防mian(划掉)main参数爆变量
int main(){
    int n,m,i;
    cin>>n>>m;
    for(int o=1;o<=n;o++){
        cin>>a[o];
    }
    for(int o=1;o<=m;o++){
        int s;
        cin>>s;
        if(o==m){
            cout<<a[s];
        }else cout<<a[s]<<endl;
    }
    return 0;
}