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
        cout<<bmi<<endl<<"Overweight";
    }
    return 0;
}