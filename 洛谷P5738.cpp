//P5738 【深基7.例4】歌唱比赛
//n(n≤100) 名同学参加歌唱比赛，并接受 m (m<=20) 名评委的评分，评分范围是 0 到 10 分。
//这名同学的得分就是这些评委给分中去掉一个最高分，去掉一个最低分，剩下 m-2 个评分的平均数。
//请问得分最高的同学分数是多少？评分保留 2 位小数。
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
    int n,m,highflag,lowflag,i,o;
    float score[100][20],highest,totalscore=0.00,pingjun[20]={0.00}; 
    /*错误点：数组范围出错，人数100，评委20
      https://www.luogu.com.cn/record/36294425*/
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(o=1;o<=m;o++){
            cin>>score[i][o];
        }
    }
    for(i=1;i<=n;i++){
        highflag=1;
        lowflag=1;
        for(o=1;o<=m;o++){
            if(score[i][highflag]<score[i][o]){
                highflag=o;
            }
            if(score[i][lowflag]>score[i][o]){
                lowflag=o;
            }
        }
        score[i][highflag]=0;
        score[i][lowflag]=0;
        for(o=1;o<=m;o++){
            totalscore+=score[i][o];
        }
        pingjun[i]=totalscore/(m-2);
        totalscore=0;
    }
    highest=pingjun[1];
    for(i=1;i<=n;i++){
        if(pingjun[i]>highest){
            highest=pingjun[i];
        }
    }
    cout<<fixed<<setprecision(2)<<highest<<endl;
    return 0;
}