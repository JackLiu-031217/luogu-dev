// Problem: P3654 First Step (ファーストステップ)
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P3654
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;
int r,c,k,ans=0;
bool f[101][101];
int clx[]={0,1},cly[]={1,0};
void check(int y,int x){
	for(int i=0;i<2;i++){
		int a=y,b=x;
		int cc=0;
		for(int p=1;p<=k;p++){
			if(a>r||a<1||b>c||b<1){
				continue;
			}
			if(f[a][b]==0){
				cc++;
			}
			a+=cly[i];
			b+=clx[i];
		}
		if(cc==k){
			//cerr<<"direction="<<i<<", point:("<<y<<", "<<x<<").\n";
			ans++;
		}
	}
	f[y][x]=1;
}
int main(){
	cin>>r>>c>>k;
	for(int i=1;i<=r;i++){
		for(int o=1;o<=c;o++){
			char a;
			cin>>a;
			if(a=='#'){
				f[i][o]=1;
			}
		}
	}
	for(int i=1;i<=r;i++){
		for(int o=1;o<=c;o++){
			if(f[i][o]==0){
				check(i,o);
			}
		}
	}
	if(k==1){
		ans/=2;
	}
	cout<<ans<<endl;
	return 0;
}