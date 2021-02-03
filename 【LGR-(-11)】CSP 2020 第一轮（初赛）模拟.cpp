//洛谷OJ U134036 CSP2020第一轮模拟
//归属于竞赛 "【LGR-(-11)】CSP 2020 第一轮（初赛）模拟" 
//https://www.luogu.com.cn/contest/34867
//https://www.luogu.com.cn/record/39506436
#include <string>
#include <iostream>
using namespace std;
//迎接社会的毒打
int main() {
    string ans =
        "CBABBBCCCBDDADD"
        "FTTFAB"
        "TFTTBA" //苦手
        "TTFTAA" //苦手 Again
        "BBCCC" //超级苦手
        "CBDAA"; //阿巴阿巴
    int no;
    cin >> no;
    cout << ans[no - 1];
    return 0;
}