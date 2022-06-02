// Problem: P1443 马的遍历
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1443
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/76781046
//https://www.luogu.com.cn/record/76791721
//https://www.luogu.com.cn/record/76791969
//https://www.luogu.com.cn/record/76794331

#include<iostream>
#include<iomanip>
#include<deque>
using namespace std;
int main(){
    deque<int> x,y;
    int n,m,xx,yy,hy[8]={1,2,2,1,-1,-2,-2,-1},zy[8]={-2,-1,1,2,2,1,-1,-2};
    bool nn[401][401];
    int ans[401][401];
    cin>>n>>m>>yy>>xx;
    x.push_back(xx);
    y.push_back(yy);
    nn[yy][xx]=1;
    ans[yy][xx]=0;
    while(!x.empty()){
        for(int i=0;i<8;i++){
            if(x.front()+hy[i]>=1&&x.front()+hy[i]<=m&&y.front()+zy[i]>=1&&y.front()+zy[i]<=n&&nn[y.front()+zy[i]][x.front()+hy[i]]==0){
                nn[y.front()+zy[i]][x.front()+hy[i]]=1;
                ans[y.front()+zy[i]][x.front()+hy[i]]=ans[y.front()][x.front()]+1;
                x.push_back(x.front()+hy[i]);
                y.push_back(y.front()+zy[i]);
            }
        }
        x.pop_front();
        y.pop_front();
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=m;o++){
            if(nn[i][o])
                cout<<left<<setw(5)<<ans[i][o];
            else cout<<left<<setw(5)<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
