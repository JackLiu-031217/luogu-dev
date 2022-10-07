//P5710 【深基3.例2】数的性质
//深入浅出
#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    bool a=!(i%2),b=(i>4&&i<=12);
    printf("%d %d %d %d\n",a&&b,a||b,((a&&!b)||(!a&&b)),!a&&!b);
    return 0;
}