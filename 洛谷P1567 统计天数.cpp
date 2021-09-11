#include<iostream>
using namespace std;
int main(){
    int a,max,ans=1,temp[1000000];
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>temp[i];
        if(i>=2){
            if(temp[i]>temp[i-1]){
                ans++;
                if(ans>max){
                    max=ans;
                }
            }else if(temp[i]<temp[i-1]){
                ans=1;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}