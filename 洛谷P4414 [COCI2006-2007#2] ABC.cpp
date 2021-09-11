/*------------------------------------------ 
        P4414 [COCI2006-2007#2]  ABC
    https://www.luogu.com.cn/problem/P4414
------------------------------------------*/

//You will be given three integers A, B and C.
//The numbers will not be given in that exact order, but we do know that A is less than B and B less than C.
//In order to make for a more pleasant viewing, we want to rearrange them in the given order.

//https://www.luogu.com.cn/record/33648696
//https://www.luogu.com.cn/record/33700932
//https://www.luogu.com.cn/record/33700977

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i[3],o;
    char a,b,c;
    cin>>i[0]>>i[1]>>i[2];
    cin>>a>>b>>c;
    sort(i,i+3);
    cout<<i[a-'A']<<" "<<i[b-'A']<<" "<<i[c-'A'];
    return 0;
}