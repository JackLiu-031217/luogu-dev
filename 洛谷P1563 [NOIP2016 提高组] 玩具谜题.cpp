#include<iostream>
using namespace std;
string ren[100001];
bool rd[100001];
bool td[100001];
int dis[100001];
int main(){
	int nr,nc;
	cin>>nr>>nc;

	for(int i=1;i<=nr;i++){
		cin>>rd[i]>>ren[i];
		//cout<<"Direction:"<<rd[i]<<" Ren:"<<ren[i]<<endl;
	}

	for(int i=1;i<=nc;i++){
		cin>>td[i]>>dis[i];
		//cout<<i<<": DirectionTurn2:"<<td[i]<<" Distance:"<<dis[i]<<endl;
	}
	
	int loc=1;
	for(int i=1;i<=nc;i++){
		if(rd[loc]){
			if(td[i]){
				loc-=dis[i];
			}
			else if(td[i]==0){
				loc+=dis[i];
			}
		}
		else if(rd[loc]==0){
			if(td[i]){
				loc+=dis[i];
			}
			else if(td[i]==0){
 				loc-=dis[i];
			}
		}
		if(loc<1){
			loc+=nr;
		}
		if(loc>nr){
			loc-=nr;
		}
		//cout<<"Location:"<<loc<<" Ren:"<<ren[loc]<<" Direction:"<<rd[loc]<<endl;
	}
	cout<<ren[loc]<<endl;
	return 0;
}