/*P1200 [USACO1.1]你的飞碟在这儿Your Ride Is Here
  众所周知，在每一个彗星后都有一只UFO。这些UFO时常来收集地球上的忠诚支持者。不幸的是，他们的飞碟每次出行都只能带上一组支持者。因此，他们要用一种聪明的方案让这些小组提前知道谁会被彗星带走。他们为每个彗星起了一个名字，通过这些名字来决定这个小组是不是被带走的那个特定的小组（你认为是谁给这些彗星取的名字呢？）。关于如何搭配的细节会在下面告诉你；
  你的任务是写一个程序，通过小组名和彗星名来决定这个小组是否能被那颗彗星后面的UFO带走。
  小组名和彗星名都以下列方式转换成一个数字：最终的数字就是名字中所有字母的积，其中A是1，Z是26。
  例如，USACO小组就是 21*19*1*3*15=17955。如果小组的数字 mod 47等于彗星的数字 mod 47,你就得告诉这个小组需要准备好被带走！
  （记住“a mod b”是a除以b的余数；34 mod 10等于44）
  写出一个程序，读入彗星名和小组名并算出用上面的方案能否将两个名字搭配起来
  如果能搭配，就输出“GO”，否则输出“STAY”。
  小组名和彗星名均是没有空格或标点的一串大写字母（不超过66个字母）。
*/
//https://www.luogu.com.cn/problem/P1200
//https://www.luogu.com.cn/record/37054987
//https://www.luogu.com.cn/record/37056015
//https://www.luogu.com.cn/record/37056631
#include<iostream>
using namespace std;
int main(){
    int ufototal=1,suiseitotal=1;
    string ufo,suisei;
    cin>>suisei;
    for(int i=0;i<suisei.size();i++){//建议用.size()函数，注意取值范围
        suiseitotal*=(suisei[i]-'@');
        //cout<<"Total of suisei now is "<<suiseitotal<<endl;
    }
    //cout<<suiseitotal<<" MOD 47 = ";
    suiseitotal%=47;
    //cout<<suiseitotal<<endl;
    cin>>ufo;
    for(int i=0;i<ufo.size();i++){ //建议用.size()函数，注意取值范围
        ufototal*=ufo[i]-'@';
        //cout<<"Total of team now is "<<ufototal<<endl;
    }
    //cout<<ufototal<<" MOD 47 = ";
    ufototal%=47;
    //cout<<ufototal<<endl;
    if(suiseitotal==ufototal){
        cout<<"GO"<<endl;
    }else{
        cout<<"STAY"<<endl;
    }
    return 0;
}