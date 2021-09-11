#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	int a,b,c=0,i,day=0;
    cin>>a;
    for(i=1;;i++){
        for(b=1;b<=i;b++){
            if(day>=a){
                cout<<c;
                return 0;
            }else{
                c+=i;
                day++;
            }
        }
    }
	return 0;
}