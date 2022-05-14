//P1217 [USACO1.5]回文质数 Prime Palindromes
//https://www.luogu.com.cn/problem/P1217
//https://www.luogu.com.cn/record/75668200 6.13s
//https://www.luogu.com.cn/record/75668212 3.96s
//https://www.luogu.com.cn/record/75668307 47ms

#include<iostream>
using namespace std;
int z[10],a,b,bw;
int getw(int n){
    int w=1;
    while(n/10!=0){
        w++;
        n/=10;
    }
    return w;
}
void check(int w){
    int aa=0;
    for(int i=1;i<=w;i++){
        int n=1;
        for(int o=2;o<=i;o++){
            n*=10;
        }
        //cerr<<"+="<<z[i]*n<<endl;
        aa+=z[i]*n;
    }
    if(aa>b||aa<a) return;
  //for(int i=2;i<=a/2;i++){  //质数筛选 3.96s
    for(int i=2;i*i<=aa;i++){ //质数筛选 47ms
        if(aa%i==0){
            return;
        }
    }
    cout<<aa<<endl;
    return;
}
void h(int w,int p){
    if(w>bw){
        return;
    }
    if(w==1){
        //cerr<<"w=1!"<<endl;
        for(int i=a;i<=9;i++){
            int pp=0;
            for(int o=2;o<=i/2;o++){
                if(i%o==0){
                    pp++;
                    //cerr<<"pp++!"<<i<<"%"<<o<<"="<<i%o<<endl;
                }
            }
            //cerr<<"pp="<<pp<<endl;
            if(pp==0) cout<<i<<endl;
        }
        h(2,1);
        return;
    }
    if(p>w/2&&w!=1){
        if(w%2){
            for(int i=0;i<=9;i++){
                z[p]=i;
                check(w);
            }
        }else check(w);
        return;
    }
    if(p==1){
        for(int i=1;i<=9;i+=2){
            z[1]=i;
            z[w]=i;
            h(w,p+1);
        }
        h(w+1,1);
    }else{
        for(int i=0;i<=9;i++){
            z[p]=i;
            z[w-p+1]=i;
            h(w,p+1);
        }
    }
    return;
}
int main(){
    int aw;
    cin>>a>>b;
    if(b>9989899){ //打表试出来的最大值
        b=9989899;
    }
    aw=getw(a);
    bw=getw(b);
    h(aw,1);
    return 0;
}