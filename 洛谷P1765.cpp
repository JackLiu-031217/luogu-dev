#include<iostream>
using namespace std;
int main(){
    string i;
    int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4},ans=0; //高端的解答往往只需要最简单粗暴的解法（
    getline(cin,i);
    for(int s=0;s<i.length();s++){
        if(i[s]>='a'&&i[s]<='z'){
            ans+=num[i[s]-'a'];
        }
        if(i[s]==' '){ //等号不双写，OI两行泪（
            ans++;
        }
    }
    cout<<ans<<endl;
}