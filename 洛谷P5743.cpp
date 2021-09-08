//P5743 【深基7.习8】猴子吃桃

//一只小猴买了若干个桃子。第一天他刚好吃了这些桃子的一半，又贪嘴多吃了一个；接下来的每一天它都会吃剩余的桃子的一半外加一个。
//第 n(n<=20) 天早上起来一看，只剩下 1 个桃子了。请问小猴买了几个桃子？

//水题（

#include<iostream>
using namespace std;
int main(){
    int i,ans=1;
    cin>>i;
    for(int o=2;o<=i;o++){
        ans++;
        ans*=2;
    }
    cout<<ans<<endl;
    return 0;
}