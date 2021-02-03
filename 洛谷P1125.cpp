//洛谷OJ P1125 笨小猴
//笨小猴的词汇量很小，所以每次做英语选择题的时候都很头疼。但是他找到了一种方法，经试验证明，用这种方法去选择选项的时候选对的几率非常大！
//这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，
//minn是单词中出现次数最少的字母的出现次数，如果maxn-minn是一个质数，那么笨小猴就认为这是个Lucky Word，这样的单词很可能就是正确的答案。
//https://www.luogu.com.cn/record/38660413
//https://www.luogu.com.cn/record/38660707
//https://www.luogu.com.cn/record/38660765
#include<iostream>
using namespace std;
int main(){
    string word;
    cin>>word;

    int charnum[26]={0};
    for(int i=0;i<word.length();i++){
        int charr=word[i]-'a'+1;
        charnum[charr]++;
    }

    int maxx=0,minn=100;
    for(int i=0;i<26;i++){
        if(charnum[i]>maxx) maxx=charnum[i];
        if(charnum[i]>0&&charnum[i]<minn) minn=charnum[i];
    }

    int monkey=maxx-minn,zhishu=0;
    for(int i=2;i<=monkey;i++){
        if(monkey%i==0) zhishu++;
    }
    if(zhishu==1){
        cout<<"Lucky Word"<<endl<<monkey<<endl;
    }else cout<<"No Answer"<<endl<<"0"<<endl; //小 心 大 小 写
    
    return 0;
}