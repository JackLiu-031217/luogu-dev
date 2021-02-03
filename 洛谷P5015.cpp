//凯凯刚写了一篇美妙的作文，请问这篇作文的标题中有多少个字符？ 
//注意：标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内。
//输入文件只有一行，一个字符串 ss。
//输出文件只有一行，包含一个整数，即作文标题的字符数（不含空格和换行符）。
//https://www.luogu.com.cn/record/34976915
//https://www.luogu.com.cn/record/34976929
//https://www.luogu.com.cn/record/34976938
//https://www.luogu.com.cn/record/34976962
//https://www.luogu.com.cn/record/34977007
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int ans=0;
	char s[5];
	gets(s); //stdio.h或cstdio,适用于char变量,切忌string
	int lengths=strlen(s);//cstring
	for(int i=0;i<lengths;i++){
		if(s[i]>='a' && s[i]<='z'){
			ans++;
		}
		if(s[i]>='A' && s[i]<='Z'){
			ans++;
		}
		if(s[i]>='0' && s[i]<='9'){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
