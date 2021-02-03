#include<iostream>
using namespace std;
int main(){
	string a;
	int n;
	cin>>n>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]+n>122){
			a[i]+=n-26;
		}else a[i]+=n;
	}
	cout<<a;
	return 0;
}
