//洛谷OJ P5729 【深基5.例7】工艺品制作
//现有一个长宽高分别为 w,x,h(1 <= w,x,h <= 20) 组成的实心玻璃立方体，可以认为是由 1*1*1 的数个小方块组成的，
//每个小方块都有一个坐标 ( i,j,k ) .现在需要进行 $q(q\le 100)$ 次切割。每次切割给出 (x1,y1,z1),(x2,y2,z2) 这 6 个参数，
//保证 x1 <= x2，y1 <= y2，z1 <= z2；
//每次切割时，使用激光工具切出一个立方体空洞，空洞的壁平行于立方体的面，空洞的对角点就是给出的切割参数的两个点。
//换句话说，所有满足  x1 <= i <= x2，y1 <= j <= y2，z1 <= k <= z2 的小方块 (i,j,k) 的点都会被激光蒸发。
//例如有一个  4*4*4 的大方块，其体积为 64；给出参数 (1,1,1),(2,2,2) 时，中间的 8 块小方块就会被蒸发，
//剩下 56 个小方块。现在想知道经过所有切割操作后，剩下的工艺品还剩下多少格小方块的体积？
//https://www.luogu.com.cn/record/39267185
//----*SAKUZYO BEAM*---->
#include<iostream>
using namespace std;
bool sq[30][30][30]={0};
int main(){
    int c,k,g;
    int sakuzyotime;
    cin>>c>>k>>g>>sakuzyotime;
    while(sakuzyotime--){
        int sakuzyox1,sakuzyox2,sakuzyoy1,sakuzyoy2,sakuzyoz1,sakuzyoz2; //削除次数,削除坐标
        cin>>sakuzyox1>>sakuzyoy1>>sakuzyoz1>>sakuzyox2>>sakuzyoy2>>sakuzyoz2;
        for(int x=sakuzyox1;x<=sakuzyox2;x++){
            for(int y=sakuzyoy1;y<=sakuzyoy2;y++){
                for(int z=sakuzyoz1;z<=sakuzyoz2;z++){
                    sq[x][y][z]=1;
                }
            }
        }
    }
    int ans=0;
    for(int x=1;x<=c;x++){
        for(int y=1;y<=k;y++){
            for(int z=1;z<=g;z++){
                if(sq[x][y][z]==0){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}