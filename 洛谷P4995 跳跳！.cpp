//https://www.luogu.com.cn/record/62632400
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	long long int n,h[301]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	sort(h,h+n+1);
	int s=0,e=n;
	long long int ans=0; //
	bool go=1;
	while(s<e){
		int t=abs(h[s]-h[e]);
		ans+=t*t;
		if(go){
			s++;
			go=0;
		}else{
			e--;
			go=1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
