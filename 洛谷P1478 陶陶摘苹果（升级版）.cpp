//https://www.luogu.com.cn/record/62240612
//https://www.luogu.com.cn/record/62240551
//https://www.luogu.com.cn/record/62240612

#include<iostream>
#include<algorithm>
using namespace std;
struct ba{
	int hi,pw;
}ap[5001];
bool cmp(ba x,ba y){
	return x.pw<y.pw;
};
int main(){
	int n,s,a,b,ans=0;
	cin>>n>>s>>a>>b;
	int h=a+b;
	//int ba[5001][2]; ÎÞÓÃ´úÂë¿é
	for(int i=1;i<=n;i++){
		cin>>ap[i].hi>>ap[i].pw;
	}
	sort(ap+1,ap+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(ap[i].pw<=s){
			if(ap[i].hi<=h){
				s-=ap[i].pw;
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
