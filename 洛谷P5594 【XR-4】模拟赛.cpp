//https://www.luogu.com.cn/record/63535801 
//https://www.luogu.com.cn/record/63535804
//上述均为未初始化布尔变量报错
//https://www.luogu.com.cn/record/63539019
#include<iostream>
using namespace std;
bool t[1004][1004]={0};
int ans;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int o=1;o<=m;o++){
			int p;
			cin>>p;
			t[p][o]=1;
		}
	}
	for(int i=1;i<=k;i++){
		ans=0;
		for(int o=1;o<=m;o++){
			if(t[i][o]){
				ans++;
			}
		}
		cout<<ans<<" ";
	}
	return 0;
}
