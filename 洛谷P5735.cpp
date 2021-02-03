#include<iostream>
#include<iomanip> //setpricision
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    double dist,x1,x2,x3,y1,y2,y3;//一定要注意，坐标的数值类型也必须是double，否则最后一个点分分钟WA
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    cout<<setprecision(2)<<fixed<<dist<<endl;
    return 0;
}