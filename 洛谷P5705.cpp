//洛谷 P5705 【深基2.例7】数字反转
//Author 深入浅出
#include<iostream>
using namespace std;
int main(){
    string num;
    int lengths;
    cin>>num;
    for(lengths=num.length()-1;lengths>=0;lengths--){
        cout<<num[lengths];
    }
    return 0;
}