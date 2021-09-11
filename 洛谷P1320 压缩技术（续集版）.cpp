/*----------------------------/
    P1320 压缩技术（续集版）    
/----------------------------*/
//https://www.luogu.com.cn/problem/P1320

//设某汉字由N × N的0和1的点阵图案组成。
//我们依照以下规则生成压缩码。连续一组数值：从汉字点阵图案的第一行第一个符号开始计算，按书写顺序从左到右，由上至下。
//第一个数表示连续有几个0，第二个数表示接下来连续有几个1，第三个数再接下来连续有几个0，第四个数接着连续几个1，以此类推……

//https://www.luogu.com.cn/record/52157798

#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char ca[200],text[40000];
    cin>>ca;
    int n=strlen(ca); //size_t strlen(const char *); 返回一个字符串的长度
    for(int i=0;i<n;i++){
        text[i]=ca[i];
    }
    for(int i=1;i<n;i++){
        cin>>ca;
        strcat(text,ca); //char *strcat(char *dest, const char *src); 在字符串dest之后连接上src
    }
    cout<<n<<" ";
    char num='0';
    int numc=0;
    for(int i=0;i<(n*n)+1;i++){
        if(num==text[i]){
            numc++;
        }else if(text[i]!=num){
            cout<<numc<<" ";
            if(num=='0'){
                num='1';
            }else if(num=='1'){
                num='0';
            }
            numc=1;
        }
    }
    return 0;
}