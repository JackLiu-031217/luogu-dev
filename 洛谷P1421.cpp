#include <cstdio>//c语言标准输入输出的头文件。
using namespace std;
int main()
{
    float a,b;
    int c;
    scanf("%f%f",&a,&b);
    a+=b/10;
    a/=1.9;
    c=a;
    printf("%d",c);
    return 0;//养成良好习惯。
}