//P5708 【深基2.习2】三角形面积
//作者 深入浅出
#include<bits/stdc++.h>
using namespace std;
int main(){
    double p,a,b,c,i;
    cin>>a>>b>>c;
    p=0.5*(a+b+c);
    i=sqrt(p*(p-a)*(p-b)*(p-c)); //sqrt:根号函数,不知道的建议多敲LaTeX(
    cout<<fixed<<setprecision(1)<<i;
    return 0;
}