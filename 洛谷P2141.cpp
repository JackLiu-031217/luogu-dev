/*P2141 珠心算测验
  珠心算是一种通过在脑中模拟算盘变化来完成快速运算的一种计算技术。珠心算训练，既能够开发智力，又能够为日常生活带来很多便利，因而在很多学校得到普及。
  某学校的珠心算老师采用一种快速考察珠心算加法能力的测验方法。他随机生成一个正整数集合，集合中的数各不相同，然后要求学生回答：
  其中有多少个数，恰好等于集合中另外两个（不同的）数之和？
  最近老师出了一些测验题，请你帮忙求出答案。
  (本题目为2014NOIP普及T1)
  INPUT
  共两行，第一行包含一个整数n，表示测试题中给出的正整数个数。
  第二行有nn个正整数，每两个正整数之间用一个空格隔开，表示测试题中给出的正整数。*/
//https://www.luogu.com.cn/record/34971754
//https://www.luogu.com.cn/record/36978467
#include<iostream>
using namespace std;
int main(){
    int i,n[101],ans=0,check;//i:心算的数字的数目,3<i<100.n[100]:测试题中的正整数.ans:答案
    cin>>i;
    for(int a=1;a<=i;a++){
        cin>>n[a];
    }
    for(int locate=1;locate<=i-1;locate++){//locate:当前心算数的位置
        for(int locateplus=locate+1;locateplus<=i;locateplus++){//locateplus:与当前心算数相加的数的位置
            int result=n[locate]+n[locateplus];
            int chongfu=1,num[1000000];
            for(check=1;check<=i;check++){
                if(result==n[check]){//当遇到相等数时
                    if(num[result]==1){//验证该数是否出现过
                        //cout<<"Number "<<result<<" has been flaged,skipping."<<endl;//debug
                        continue;
                    }else num[result]=1;/*cout<<"Number "<<result<<" has bot been signed, signing"<<endl;*/ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}