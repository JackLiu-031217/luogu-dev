//P5725 【深基4.习8】求三角形
//模仿例题，打印出不同方向的正方形，然后打印三角形矩阵。中间有个空行。
//https://www.luogu.com.cn/record/36420077
#include<iostream>
using namespace std;
int main(){
    int hang,lie,input,i=1;
    cin>>input;
    //正方形
    for(hang=1;hang<=input;hang++){
        for(lie=1;lie<=input;lie++){
            if(i<10){
                cout<<"0"<<i;
            }else{
                cout<<i;
            }
            i++;
            if(lie==input){
                cout<<"\n";
            }
        }
    }
    cout<<"\n";

    //三角形
    i=1;
    int o=1;                          //记录数值个数
     for(hang=1;hang<=input;hang++){
        int p=input-o;                //记录空格数
        for(lie=1;lie<=input;lie++){
            if(p>=lie){               //记录列数
                cout<<"  ";
            }else{
                if(i<10){
                    cout<<"0"<<i;
                    i++;
                }else{
                    cout<<i;
                    i++;
                }
                if(lie==input){
                    cout<<"\n";
                }
            }
        }
        o++;                          //数值区域+1
    }
    return 0;
}