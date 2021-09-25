/*
	P5732 【深基5.习7】杨辉三角
	https://www.luogu.com.cn/problem/P5732

	给出 n(n<=20)，输出杨辉三角的前 n 行。
	如果你不知道什么是杨辉三角，可以观察样例找找规律。
*/

//https://www.luogu.com.cn/record/58564042

#include<iostream>
using namespace std;
int yh[21][21]={0};
int main(){
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		for(int n=1;n<=i;n++){
			if(n==1||n==i){
				yh[i][n]=1;
			}else yh[i][n]=yh[i-1][n-1]+yh[i-1][n];
		}
	}
	for(int i=1;i<=m;i++){
		for(int n=1;n<=i;n++){
			if(n!=i) cout<<yh[i][n]<<" ";
				else cout<<yh[i][n]<<endl;
		}
	}
	return 0;
}