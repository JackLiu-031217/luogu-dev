/*
    P1116 车厢重组
    https://www.luogu.com.cn/problem/P1116

    在一个旧式的火车站旁边有一座桥，其桥面可以绕河中心的桥墩水平旋转。
    一个车站的职工发现桥的长度最多能容纳两节车厢，如果将桥旋转 180 度，则可以把相邻两节车厢的位置交换，用这种方法可以重新排列车厢的顺序。
    于是他就负责用这座桥将进站的车厢按车厢号从小到大排列。
    他退休后，火车站决定将这一工作自动化，其中一项重要的工作是编一个程序，输入初始的车厢顺序，计算最少用多少步就能将车厢排序。
*/

//https://www.luogu.com.cn/record/58090408
//冒泡排序 https://oi-wiki.org/basic/bubble-sort/

#include<iostream>
using namespace std;
int main(){
    int n,t[10000],ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=1;i<=n;i++){
        for(int l=0;l<n-1;l++){
            if(t[l]>t[l+1]){
                int m=t[l];
                t[l]=t[l+1];
                t[l+1]=m;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}