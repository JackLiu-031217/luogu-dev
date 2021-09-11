#include<iostream>
using namespace std;
int main(){
	string k,w;
	bool c[1000]={0};
	char kc[1001],wc[1001];
	cin>>k>>w;
	for(int i=0;i<k.length();i++){
		if(k[i]>='A'&&k[i]<='Z')
			k[i]-='A'-'a';
		kc[i+1]=k[i];
	}
	for(int i=0;i<w.length();i++){
		if(w[i]>='A'&&w[i]<='Z'){
			c[i]=true;
			w[i]=w[i]-'A'+'a';
		}
		wc[i+1]=w[i];
	}
	for(int i=1;i<=w.length();i++){
		if(i%k.length())
			wc[i]-=kc[i%k.length()]-'a';
		else
			wc[i]-=kc[k.length()]-'a';
		if(wc[i]<'a') wc[i]='z'+1-('a'-wc[i]);
		if(wc[i]>'z') wc[i]='a'-1+(wc[i]-'z');
	}
	for(int i=1;i<=w.length();i++){
		if(c[i-1])
			wc[i]=wc[i]-'a'+'A';
		cout<<wc[i];
	}
	cout<<endl;
	return 0;
}