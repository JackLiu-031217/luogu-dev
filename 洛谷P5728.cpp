//第一次提交:https://www.luogu.com.cn/record/34785861 20分
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,student[1001][4],sum[1001],qiguxiangdang=0;//善用二维数组
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>student[i][1]>>student[i][2]>>student[i][3];
        sum[i]=student[i][1]+student[i][2]+student[i][3];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            //abs:绝对值求值函数，头文件为cmath或math.h
            if(abs(student[i][1]-student[j][1])<=5 && abs(student[i][2]-student[j][2])<=5 && abs(student[i][3]-student[j][3])<=5 && sum[i]-sum[j]<=10){
                qiguxiangdang++;
            }
        }
    }
    cout<<qiguxiangdang<<endl;
    return 0;
}