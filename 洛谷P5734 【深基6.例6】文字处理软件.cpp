//P5734 【深基6.例6】文字处理软件
//https://www.luogu.com.cn/problem/P5734
//https://www.luogu.com.cn/record/75562766 忘加查询步骤 -1 特判了
//https://www.luogu.com.cn/record/75562842

#include<iostream>
using namespace std;
int main(){
    int q;
    string a;
    cin>>q>>a;
    for(int i=1;i<=q;i++){
        short m;
        cin>>m;
        switch(m){
            case 1:{
                string aa;
                cin>>aa;
                a+=aa;
                cout<<a<<endl;
                break;
            }
            case 2:{
                int aa,bb;
                string cc;
                cin>>aa>>bb;
                for(int i=0;i<bb;i++){
                    cc.push_back(a[aa+i]);
                }
                a=cc;
                cout<<a<<endl;
                break;
            }
            case 3:{
                int aa;
                string bb;
                cin>>aa>>bb;
                a.insert(aa,bb); //STL
                cout<<a<<endl;
                break;
            }
            case 4:{
                string aa;
                cin>>aa;
                if(a.find(aa)<a.length()){
                    cout<<a.find(aa)<<endl; //STL
                }else cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}