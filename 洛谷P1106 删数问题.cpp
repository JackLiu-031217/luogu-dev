//https://www.luogu.com.cn/record/62357471
//https://www.luogu.com.cn/record/62270438
//https://www.luogu.com.cn/record/62317696
//https://www.luogu.com.cn/record/62357471

#include<iostream>
using namespace std;
int main(){
	string a;
	int k;
	cin>>a>>k;
	int ll=a.length();
	for(int i=1;i<=k;i++){
		for(int o=0;o<ll;o++){
			if(a[o]>a[o+1]){
				for(int n=o;n<=ll;n++){
					a[n]=a[n+1];
				}
				ll--;
				break;
			}
		}
	}
	int in=0;
	for(int i=0;i<ll;i++){
		if(a[i]=='0'){
			in++;
		}else break;
	}

	//10000 1
	if(in==ll){
		cout<<0<<endl;
		return 0;
	}

	for(int i=in;i<ll;i++){
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
