//P1506 拯救oibh总部
//https://www.luogu.com.cn/problem/P1506
//TAG: 模拟,搜索,广度优先搜索,BFS,深度优先搜索,DFS
//https://www.luogu.com.cn/record/76038217 此记录为DFS
#include<iostream>
using namespace std;
char aa[502][502];
bool a[502][502];
int x,y,ld[4]={0,1,0,-1},hd[4]={-1,0,1,0};
void dfs(int h,int l){
    if(h<0||h>x+1||l<0||l>y+1||a[h][l]){
        return;
    }
    a[h][l]=1;
    //debug
    //cerr<<h<<" "<<l<<endl;
    //cerr<<"--------"<<endl;
    //
    for(int p=0;p<4;p++){
        dfs(h+hd[p],l+ld[p]);
    }
    return;
}
int main(){
    int ans;
    cin>>x>>y;
    for(int i=1;i<=x;i++){
        for(int o=1;o<=y;o++){
            cin>>aa[i][o];
            if(aa[i][o]=='*'){
                a[i][o]=1;
            }
        }
    }
    dfs(0,0);
    for(int i=1;i<=x;i++){
        for(int o=1;o<=y;o++){
            if(a[i][o]==0){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}