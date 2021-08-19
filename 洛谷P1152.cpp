/*--------------------------------------------/
                P1152 欢乐的跳
    https://www.luogu.com.cn/problem/P1152   
/--------------------------------------------*/

/*
    一个nn个元素的整数数组，如果数组两个连续元素之间差的绝对值包括了[1,n−1]之间的所有整数，则称之符合“欢乐的跳”，
    如数组1 4 2 31423符合“欢乐的跳”，因为差的绝对值分别为：3,2,1。
    给定一个数组，你的任务是判断该数组是否符合“欢乐的跳”。
*/

//https://www.luogu.com.cn/record/56288145
//https://www.luogu.com.cn/record/56342830

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    long long int nn[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nn[i];
    }

    bool nnn[1000]={0};
    for(int i=0;i<n-1;i++){
        int h=abs(nn[i]-nn[i+1]);
        if(h>=1&&h<n){ //越界判断
            if(nnn[h-1]){ //重复判断
                cout<<"Not jolly"<<endl;
                return 0;
            }else nnn[h-1]=1;
        }else{
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    
    int c=0;
    for(int i=0;i<n;i++){
        if(nnn[i]) c++;
    }
    
    if(c==n-1) cout<<"Jolly"<<endl;
    
    return 0;
}