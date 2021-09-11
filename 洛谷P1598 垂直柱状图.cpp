/*
  P1598 垂直柱状图
  写一个程序从输入文件中去读取四行大写字母（全都是大写的，每行不超过100个字符），
  然后用柱状图输出每个字符在输入文件中出现的次数。严格地按照输出样例来安排你的输出格式。
*/
//https://www.luogu.com.cn/record/37126781
#include<iostream>
using namespace std;
//以下数组需要开成全局数组，以免堆在main函数中爆栈
int num[27]={0},maxx;
char star[101][101];
string tmp1,tmp2,tmp3,tmp4;

int main(){
    //getline:此函数可读取整行，包括前导和嵌入的空格，并将其存储在字符串对象中
    getline(cin,tmp1);
    getline(cin,tmp2);
    getline(cin,tmp3);
    getline(cin,tmp4);

    //计数
    for(int i=0;i<tmp1.size();i++){ //i:y轴 j:x轴
        if(tmp1[i]>='A'&&tmp1[i]<='Z'){
            num[tmp1[i]-'A'+1]++;
        }
    }
    for(int i=0;i<tmp2.size();i++){
        if(tmp2[i]>='A'&&tmp2[i]<='Z'){
            num[tmp2[i]-'A'+1]++;
        }
    }
    for(int i=0;i<tmp3.size();i++){
        if(tmp3[i]>='A'&&tmp3[i]<='Z'){
            num[tmp3[i]-'A'+1]++;
        }
    }
    for(int i=0;i<tmp4.size();i++){
        if(tmp4[i]>='A'&&tmp4[i]<='Z'){
            num[tmp4[i]-'A'+1]++;
        }
    }
    
    //比较
    for(int i=1;i<=26;i++){
        maxx=max(maxx,num[i]);
    }
    //字符注入
    for(int i=1;i<=26;i++){
        for(int j=maxx;j>=maxx-num[i]+1;j--){
            star[j][i]='*'; //加星号
        }
        for(int j=maxx-num[i];j>=1;j--){
            star[j][i]=' '; //加空格
        }
        star[maxx+1][i]=i+'A'-1;
    }
    for(int i=1;i<=maxx+1;i++){
        for(int j=1;j<=51;j++){
            if(j%2==0){
                cout<<" "; //加空格
                continue;
            }
            cout<<star[i][j/2+1];
        }
        cout<<endl;
    }
    return 0;
}