//P1205 [USACO1.2] 方块转换 Transformations
//https://www.luogu.com.cn/problem/P1205

//https://www.luogu.com.cn/record/87542216
//https://www.luogu.com.cn/record/87542740

#include<iostream>
using namespace std;
int n;
char a[11][11],b[11][11],c[11][11];
bool check(int stage,bool check_not_in_stage_5th){
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            if(b[i][o]!=c[i][o]){
                return 0;
            }
        }
    }
    if(check_not_in_stage_5th){
        cout<<stage<<endl;
    }else cout<<5<<endl;
    return 1;
}
void acr(){
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            c[i][o]=a[i][o];
        }
    }
    return;
}
bool check_1to3(bool stage_in_5th){
    for(int i=1;i<=3;i++){
        char tmp[11][11];
        for(int y=1;y<=n;y++){
            for(int x=1;x<=n;x++){
                tmp[x][n-y+1]=c[y][x];
            }
        }
        for(int o=1;o<=n;o++){
            for(int p=1;p<=n;p++){
                c[o][p]=tmp[o][p];
            }
        }
        if(stage_in_5th){
            if(check(i,0)){
                return 1;
            }
        }else if(check(i,1)){
            return 1;
        }
    }
    return 0;
}
bool check_4to5(){
    char tmp[11][11];
    for(int y=1;y<=n;y++){
        for(int x=1;x<=n;x++){
            tmp[y][x]=c[y][n-x+1];
        }
    }
    for(int o=1;o<=n;o++){
        for(int p=1;p<=n;p++){
            c[o][p]=tmp[o][p];
        }
    }
    if(check(4,1)){
        return 1;
    }else{
        if(check_1to3(1)){
            return 1;
        }
    }
    return 0;
}
/// @brief 
/// @return 
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            cin>>a[i][o];
            c[i][o]=a[i][o];
        }
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n;o++){
            cin>>b[i][o];
        }
    }
    if(check_1to3(0)==0){
        acr();
        if(check_4to5()==0){
            acr();
            if(check(6,1)==0){
                cout<<7<<endl;
            }
        }
    }
    return 0;
}