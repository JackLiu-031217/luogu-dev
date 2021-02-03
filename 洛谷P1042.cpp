//P1042 乒乓球
//华华通过以下方式进行分析，首先将比赛每个球的胜负列成一张表，然后分别计算在1111分制和2121分制下，双方的比赛结果（截至记录末尾）。
//比如现在有这么一份记录，（其中W表示华华获得一分，L表示华华对手获得一分）：
//WWWWWWWWWWWWWWWWWWWWWWLW
//在1111分制下，此时比赛的结果是华华第一局1111比00获胜，第二局1111比00获胜，正在进行第三局，当前比分11比11。而在2121分制下，此时比赛结果是华华第一局2121比00获胜，正在进行第二局，比分22比11。
//如果一局比赛刚开始，则此时比分为00比00。直到分差大于或者等于22，才一局结束。
//你的程序就是要对于一系列比赛信息的输入（WLWL形式），输出正确的结果。
//https://www.luogu.com.cn/record/36502585
#include<iostream>
using namespace std;
int main(){
    char word[62500];     //开个够大的数组(25*2500=62500)
    int awin=0,bwin=0,i;
    for(i=1;;i++){
        cin>>word[i];
        if(word[i]=='W'){ //标记
            word[i]=1;
        }else if(word[i]=='L'){
            word[i]=2;
        }else if(word[i]=='E'){
            word[i]=0;
            break;
        }
    }
    //11分
    for(int o=1;o<=i;o++){
        if(word[o]==1){
            awin++;
        }else if(word[o]==2){
            bwin++;
        }if(word[o]==0){
            cout<<awin<<":"<<bwin<<endl<<endl; //EOF
        }
        if(awin-bwin>=2||bwin-awin>=2){
            if(awin>=11||bwin>=11){           //到达11分和分差为2时自动输出+清除
                cout<<awin<<":"<<bwin<<endl;
                awin=0;
                bwin=0;
            }
        }
    }
    awin=0;                                   //为下文归零
    bwin=0;
    //21分
    for(int o=1;o<=i;o++){
        if(word[o]==1){
            awin++;
        }else if(word[o]==2){
            bwin++;
        }if(word[o]==0){
            cout<<awin<<":"<<bwin<<endl<<endl;
        }
        if(awin-bwin>=2||bwin-awin>=2){
            if(awin>=21||bwin>=21){
                cout<<awin<<":"<<bwin<<endl;
                awin=0;
                bwin=0;
            }
        }
    }
    return 0;
}