// Problem: P1012 [NOIP1998 提高组] 拼数
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1012
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm> //sort
using namespace std;
bool cmp(string a,string b){ //https://www.luogu.com.cn/blog/_post/162417
	return a+b>b+a;
}
int main(){
	int n;
	string s[21];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+n,cmp);
	//如果cmp返回结果为假, 那么函数就会将他们互换位置；
	//如果cmp返回结果为真，就会保持原来位置不变。
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}