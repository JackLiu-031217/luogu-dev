//https://www.luogu.com.cn/record/62888475
#include<iostream>
using namespace std;
int main(){
	int n,z=0,h=1;
	cin>>n;
	while(z<n){
		z+=h;
		h++;
	}
	h--;
	int f,s;
	if(h%2==1){
		f=1;s=h;
		for(int i=1;i<=z-n;i++){
			f++;s--;
		}
	}else{
		f=h;s=1;
		for(int i=1;i<=z-n;i++){
			f--;s++;
		}
	}
	cout<<f<<"/"<<s<<endl;
	return 0;
}
