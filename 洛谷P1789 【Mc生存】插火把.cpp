//P1789 【Mc生存】插火把
//https://www.luogu.com.cn/problem/P1789

//https://www.luogu.com.cn/record/75563981
//https://www.luogu.com.cn/record/75564448
//https://www.luogu.com.cn/record/75564492
//https://www.luogu.com.cn/record/75564512
//https://www.luogu.com.cn/record/75564904

#include<iostream>
using namespace std;
bool l[101][101];
int main(){
    int n,m,k,a=0;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        for(int o=y-2;o<=y+2;o++){
            if(o>=0&&o<=n){
                l[x][o]=1;
            }
        }
        for(int o=x-2;o<=x+2;o++){
            if(o>=1&&o<=n){
                l[o][y]=1;
            }
        }
        for(int o=x-1;o<=x+1;o++){
            for(int p=y-1;p<=y+1;p++){
                if(o>=1&&o<=n&&p>=0&&p<=n){
                    l[o][p]=1;
                }
            }
        }
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        for(int o=x-2;o<=x+2;o++){
            for(int p=y-2;p<=y+2;p++){
                if(o>=1&&o<=n&&p>=1&&p<=n){
                    l[o][p]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            if(l[i][o]==0){
                a++;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}