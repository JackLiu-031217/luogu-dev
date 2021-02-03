#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int fish,cute[101],better[101]={0},a,i,m;
	cin>>fish;
	for(a=1;a<=fish;a++){
		cin>>cute[a];
		for(i=a;i>=1;i--){
			/*
			if(cute[i]>cute[a]){ 
				better[a]+=1;
			}

			6
			4 3 0 5 1 2
			0 1 2 0 3 3
			
			*/
			//符号错，步步错（
			if(cute[i]<cute[a]){
				better[a]+=1;
			}
		}	
		cout<<better[a]<<" ";
	}

	return 0;
}
