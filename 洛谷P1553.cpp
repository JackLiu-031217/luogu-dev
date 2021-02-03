//洛谷OJ P1553 数字反转（升级版）
//给定一个数，请将该数各个位上数字反转得到一个新数。
//这次与NOIp2011普及组第一题不同的是：这个数可以是小数，分数，百分数，整数。整数反转是将所有数位对调；
//小数反转是把整数部分的数反转，再将小数部分的数反转，不交换整数部分与小数部分；
//分数反转是把分母的数反转，再把分子的数反转，不交换分子与分母；
//百分数的分子一定是整数，百分数只改变数字部分。
//整数新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零；
//小数新数的末尾不为0（除非小数部分除了0没有别的数，那么只保留1个0）;
//分数不约分，分子和分母都不是小数（约分滴童鞋抱歉了，不能过哦。输入数据保证分母不为0），本次没有负数。
//https://www.luogu.com.cn/record/37335609
//https://www.luogu.com.cn/record/38664566
//https://www.luogu.com.cn/record/38664969
//https://www.luogu.com.cn/record/38665245
//https://www.luogu.com.cn/record/39094527
//https://www.luogu.com.cn/record/39097275
//https://www.luogu.com.cn/record/39097539
#include<iostream>
using namespace std;
int main(){
    string num,numcopy[3]; //用字符串记录数值与数值拷贝(拷贝分为符号前和符号后)
    int switchnum=1,isdot=0,isslash=0,ispercent=0;
    cin>>num;
    if(num=="0"){ //如果前面是0而且还没有符号就直接输出
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0;i<num.size();i++){
        if(num[i]=='/'){ //斜杠标记
            isslash=1;
            switchnum=2;
            continue;
        }
        if(num[i]=='.'){ //小数点标记
            isdot=1;
            switchnum=2;
            continue;
        }
        if(num[i]=='%'){ //百分号标记
            ispercent=1;
            break;
        }
        numcopy[switchnum]+=num[i]; //按照switchnum数不同区分符号前后的数
    }
    if(numcopy[1]=="0"&&(numcopy[2]=="0"||numcopy[2]=="")){ //如果拷贝1和2都是0(即0/0,0.0的情况)
        cout<<"0";
        if(isdot) cout<<".";
        if(isslash) cout<<"/";
        if(ispercent){
            cout<<"%"<<endl;
            return 0;
        }
        cout<<"0"<<endl;
        return 0;
    }
    int nozero=0;
    if(numcopy[1]=="0"){ //符号前如果只有0则直接输出0
        cout<<"0";
    }else for(int i=numcopy[1].size()-1;i>=0;i--){ //去除符号前数字开头的0
        if(numcopy[1][i]=='0'&&nozero==0){
                continue;
        }else if(numcopy[1][i]!='0'){
            nozero=1;
        }
        cout<<numcopy[1][i];
    }
    //小数点
    if(isdot){
        cout<<".";
        if(numcopy[2]=="0"){
            cout<<"0"<<endl;
            return 0;
        }
        nozero=0;
        for(int i=0;i<numcopy[2].size();i++){
            if(numcopy[2][i]=='0'&&nozero==0){ //跳过反转之后开头的0,直到发现不为0的数
                nozero=0;
                numcopy[2][i]='\0'; //实现方法:0改写成\0
            }else if(numcopy[2][i]!='0'){
                nozero=1;
            }
        }
        for(int i=numcopy[2].size()-1;i>=0;i--){
            cout<<numcopy[2][i];
        }
        cout<<endl;
    }
    //分数
    if(isslash){
        cout<<"/";
        if(numcopy[2]=="0"){
            cout<<"0"<<endl;
            return 0;
        }
        nozero=0;
        for(int i=numcopy[2].size()-1;i>=0;i--){
            if(numcopy[2][i]=='0'&&nozero==0){ //跳过反转之后开头的0,直到发现不为0的数
                continue; //实现方法:跳到下一位数
            }else if(numcopy[2][i]!='0'){
                nozero=1;
            }
            cout<<numcopy[2][i];
        }
        cout<<endl;
    }
    if(ispercent){ //百分号不用动符号后面的数
        cout<<"%"<<endl;
    }
    return 0;
}
//拷贝用的数组好像偏大了……