//P5714 【深基3.例7】肥胖问题
//深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    double m,h,bmi;
    cin>>m>>h;
    bmi=m/(h*h);
    if(bmi<18.5){
        cout<<"Underweight";
    }else if(bmi>=18.5&&bmi<24){
        cout<<"Normal";
    }else{
        cout<<bmi<<endl<<"Overweight"; //C++
        //double bb=bmi;
        //printf("%6g\nOverweight\n",bmi); //C
        //C语言下的做法并不严谨，详见 https://www.luogu.com.cn/discuss/472998
    }
    return 0;
}