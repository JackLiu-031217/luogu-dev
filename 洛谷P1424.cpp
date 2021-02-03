//洛谷 P1424 小鱼的路程（改进版）by yeszy
//https://www.luogu.com.cn/problem/P1424
//https://www.luogu.com.cn/record/30322448
//这位大佬的题总是深入人心呢（
#include<bits/stdc++.h> //万能通用符（
using namespace std;   //那么为什么它通用呢？你把它找到，打开，马上就明白了（
int main(){
    unsigned long long n,lucheng; //超大wèishù路程（cue一下weishu老师）
    int x,loop; //整数的周x与循环loop次数
    lucheng=0; //路程归零
    cin>>x>>n; //输入数值
    for(loop=0;loop<n;loop++) //循环更改星期数
    { 
        if((x!=6)&&(x!=7)) //切记“同时”的符号是&&！不是||!
        {                //如果符号错误会直接导致下文多加2次数！（磨叽了三天得到的结论
            lucheng+=250; //如果不是星期六/日则走250m
        }
        if(x==7) //到了星期天
        {
            x=1; //就是星期一
        }
        else //剩下的日子
        {
            x++; //星期x+1
        }
    }
    cout<<lucheng; //一切结束后输出结果
    return 0; //胜利是必然的嘛，怎么，有什么不满吗？（
}