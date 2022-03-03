#include<iostream>
using namespace std;
int main(){
	int d[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int ans=0,a,b,c,dd;
	cin>>a>>b;
	for(int i=1;i<=12;i++){
		for(int p=1;p<=d[i];p++){
			c=i*100+p;
			dd=c+(p%10)*10000000+(p/10)*1000000+(i%10)*100000+(i/10)*10000;
			if(dd<a||dd>b) continue;
			ans++;
		}
	}
	cout<<ans<<endl;
}
