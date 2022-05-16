//P1614 爱与愁的心痛
//https://www.luogu.com.cn/problem/P1614
//https://www.luogu.com.cn/record/75866151

#include<iostream>
#include<deque>
//std::deque 是 STL 提供的 双端队列 数据结构。
//能够提供线性复杂度的插入和删除，以及常数复杂度的随机访问。
using namespace std;
int main(){
    int n,m,t[3001],ans=3000000;
    deque<int> a;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>t[i];
    }
    for(int i=1;i<=m;i++){
        a.push_back(t[i]);
    }
    for(int i=m;i<=n;i++){
        //cerr<<"-------"<<endl;
        deque<int> b;
        int aa=0;
        b=a;
        for(int o=1;o<=m;o++){
            //cerr<<"b front()="<<b.front()<<endl;
            aa+=b.front();
            b.pop_front();
        }
        //cerr<<"aa="<<aa<<endl;
        if(aa<ans){
            //cerr<<"aa<ans"<<endl;
            ans=aa;
        }
        a.pop_front();
        a.push_back(t[i+1]);
    }
    cout<<ans<<endl;
    return 0;
}