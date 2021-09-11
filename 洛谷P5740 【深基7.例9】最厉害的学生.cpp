/*
    P5740 【深基7.例9】最厉害的学生
    https://www.luogu.com.cn/problem/P5740
    
    现有 N(N<=1000) 名同学参加了期末考试，并且获得了每名同学的信息：
    姓名（不超过 8 个字符的仅有英文小写字母的字符串）、语文、数学、英语成绩（均为不超过 150 的自然数）。
    总分最高的学生就是最厉害的，请输出最厉害的学生各项信息（姓名、各科成绩）。如果有多个总分相同的学生，输出靠前的那位。
*/

//https://www.luogu.com.cn/record/57764532
//https://www.luogu.com.cn/record/57764660
//https://www.luogu.com.cn/record/57766916

#include<iostream>
using namespace std;
int main(){
    int n;
    struct{
        string na;
        int ch;
        int ma;
        int en;
    }a[1001];
    cin>>n;
    int maxx=0;
    int maxs=1;
    for(int i=1;i<=n;i++){
        cin>>a[i].na>>a[i].ch>>a[i].ma>>a[i].en;
        int z=a[i].ch+a[i].ma+a[i].en;
        if(z>maxx){
            maxx=z;
            if(maxs<i){
                maxs=i;
            }
        }
    }
    cout<<a[maxs].na<<" "<<a[maxs].ch<<" "<<a[maxs].ma<<" "<<a[maxs].en;
    return 0;
}