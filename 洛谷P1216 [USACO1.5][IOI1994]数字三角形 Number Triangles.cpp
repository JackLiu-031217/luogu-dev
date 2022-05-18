//P1216 [USACO1.5][IOI1994]数字三角形 Number Triangles
//https://www.luogu.com.cn/problem/P1216
//https://www.luogu.com.cn/record/75951239
#include<iostream>
using namespace std;
int tr[1001][1001];
int main(){
    int r;
    cin>>r;
    //cerr<<"cin success"<<endl;
    for(int i=1;i<=r;i++){
        for(int o=1;o<=i;o++){
            cin>>tr[i][o];
            //cerr<<tr[i][o]<<" ";
        }
        //cerr<<endl;
    }
    //最优子结构 下到上查
    for(int i=r-1;i>=1;i--){
        for(int o=1;o<=i;o++){
            tr[i][o]+=max(tr[i+1][o],tr[i+1][o+1]);
        }
    }
    //tr[1][1]+=max(tr[2][1],tr[2][2]);
    cout<<tr[1][1]<<endl;
    return 0;
}