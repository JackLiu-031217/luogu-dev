/*-----------------------------------------/
         P5736 【深基7.例2】质数筛
  输入 n(n<=100) 个不大于 100000 的整数。
  要求全部储存在数组中，去除掉不是质数的数字，
           依次输出剩余的质数。
/----------------------------------------*/
#include<iostream>
using namespace std;
int main(){
    int n,num[101];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    for(int i=1;i<=n;i++){
        int z=0;
        for(int o=2;o<=num[i];o++){
            if(num[i]%o==0){
                z++;
            }
        }
        if(z==1){
            cout<<num[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}