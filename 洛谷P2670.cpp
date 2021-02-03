/*----------------------------------------
+        洛谷OJ    P2670   扫雷游戏       +
+ https://www.luogu.com.cn/problem/P2670 +
----------------------------------------*/
//https://www.luogu.com.cn/record/39099059
#include<iostream>
using namespace std;
//参考了 https://www.luogu.com.cn/blog/wxw/solution-p2670 声称不会TLE的代码
//不会用gdb的一定要记得写完代码把debug用的语句 删 掉 哦
int main(){
    char boom;
    bool sign[105][105]={0};
    int xlimit,ylimit;
    cin>>ylimit>>xlimit; //输入y值x值限度 不要弄反！！！！！
    for(int i=1;i<=ylimit;i++){
        for(int n=1;n<=xlimit;n++){
            cin>>boom; //输入地雷图
            if(boom=='*'){
                sign[n][i]=1;//地雷标记
            }
        }
    }
    for(int i=1;i<=ylimit;i++){
        for(int o=1;o<=xlimit;o++){
            if(sign[o][i]==1){
                cout<<"*";
            }else cout<<sign[o-1][i-1]+sign[o-1][i]+sign[o-1][i+1]+sign[o][i-1]+sign[o][i+1]+sign[o+1][i-1]+sign[o+1][i]+sign[o+1][i+1];
        }
        cout<<endl;
    }
    return 0;
}