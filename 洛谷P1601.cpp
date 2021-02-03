//洛谷OJ P1601 A+B Problem（高精）
//高精度加法，相当于a+b problem，不用考虑负数.
//我的第一道高精题。
//https://www.luogu.com.cn/record/39152546
#include<iostream>
using namespace std;
int tmp;
int highplus(char n1,char n2){ //高精度计算函数
    int n=(n1-'0')+(n2-'0')+tmp;
    tmp=n/10;
    if(n+'0'<='9'){
        return n+'0';
    }else return n-10+'0'; //回传时以对应的ASCII码形式回传
}
string expand(string num1,string num2){ //string扩充函数
    string num="";
    for(int i=1;i<=num1.length()-num2.length();i++){
        num+='0'; //前面塞0（塞爆！塞爆！（划掉
    }
    num+=num2;
    return num;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    if(num1.length()>num2.length()){ //先把两个字符串的length扩充到相等
        num2=expand(num1,num2);
    }else num1=expand(num2,num1);
    string result=""; //结果归零
    for(int i=num1.length()-1;i>=0;i--){
        result+=highplus(num1[i],num2[i]);
    }
    if(tmp+'0'!='0'){ //如果tmp是0就不要加一位了
    //tmp设成全局函数还是有用的
        result+=tmp+'0';
    }
    for(int i=result.length()-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}