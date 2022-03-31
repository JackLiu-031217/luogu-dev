// Problem: P4387 【深基15.习9】验证栈序列
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P4387
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/72730424 WA*5
//https://www.luogu.com.cn/record/72808922 AC

//https://zh.cppreference.com/w/cpp/container/stack

/*
   从头开始，按入栈顺序入栈，如果栈顶与出栈序列的最前面的数相同，就将其弹出
   最后将所有入栈的数都入栈后，判断栈中剩下的数与出栈序列中剩下的数顺序相同，
   就按照上面的方式依次弹出，直到无法弹出或栈为空
   如果栈为空，则出栈序列是合法的，输出"Yes",不为空输出"No"
   via https://www.luogu.com.cn/blog/_post/203880
*/

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        int a[100001],b[100001];
        stack<int> ii;
        for(int p=1;p<=k;p++){
            cin>>a[p];
        }
        for(int p=1;p<=k;p++){
            cin>>b[p];
        }
        int l=1;
        for(int p=1;p<=k;p++){
            ii.push(a[p]);
            while(ii.top()==b[l]){ //这玩意貌似不能单丢出来
                ii.pop();          //5 
                l++;               //1 2 3 4 5
                if(ii.empty()){    //4 5 3 2 1
                    break;         //这个出栈顺序也是正确的。
                }                  //4入栈后直接弹出，然后5入栈，然后依次弹出
            }                      //所以需要一条一条试，能弹则弹
        }
        if(ii.empty()){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}