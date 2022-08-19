//P1010 [NOIP1998 普及组] 幂次方
//https://www.luogu.com.cn/problem/P1010

//有极大量的参考: https://www.luogu.com.cn/blog/xcc/solution-p1010

//https://www.luogu.com.cn/record/84433400

#include<iostream>
#include<cmath>
using namespace std;
void loop(int a){
    for(int i=14;i>=0;i--){ //从最大的平方值开整
        if(pow(2,i)<=a){ //找到最大平方值
            if(i==1) cout<<"2";
            else if(i==0) cout<<"2(0)"; //特殊处理
            else{
                cout<<"2(";
                loop(i); // 在新的"2()"中重找幂，范围大幅度缩小
                /*
                    1315=2^10+2^8+2^5+2^2+2^0
                    //a=10 2^(10)
                      a=3  2^(2^(2+1)+2)
                    //a=8  2^(8)
                      a=3  2^(2^(2+1))
                    //a=5  2^5
                      a=5  2^(2^(2)+1)
                    //a=2  2^(1)
                    //a=0  2^(0)
                */
                cout<<")";
            }
            a-=pow(2,i); //除去已求数值
            if(a){ //通过数值有无判断是否继续后附"+"号
                cout<<"+";
            }
        }
    }
}
int main(){
    int a;
    cin>>a;
    loop(a);
    cout<<endl;
    return 0;
}