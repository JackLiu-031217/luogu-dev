/*----------------------------------------
                洛谷 P1328
            生活大爆炸版石头剪刀布
              NOIP2014 提高组
----------------------------------------*/
//https://www.luogu.com.cn/problem/P1328
//https://www.luogu.com.cn/record/46035470
#include<iostream>
using namespace std;
int main(){
    int la,lb; //周期长度
    int na[201],nb[201]; //周期内出拳状况
    int t; //出拳次数

    cin>>t>>la>>lb;
    //输入出拳规律
    for(int i=1;i<=la;i++){
        cin>>na[i];
    }
    for(int i=1;i<=lb;i++){
        cin>>nb[i];
    }

    //胜负判断
    int as=0,bs=0; //分数变量
    int al=1,bl=1; //当前出拳位置
    int a[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
    for(int i=1;i<=t;i++){ //在有限次数内循环猜拳
        //以下为先前旧式判断方法,使用switch-case组合
        /*
        if(na[al]==nb[bl]){ //平手
            al++;
            bl++;
            if(al>la)
                al=1;
            if(bl>lb)
                bl=1;
            continue;
        }
        */

        //胜负判断
        //方法很暴力很麻烦但希望能管用（
        //残酷的事实证明坚决不能用switch
        //case条件整不好就全抓瞎了（
        /*
        if(na[al]==0) //小A出剪刀
            switch(nb[bl]){
                case 1:bs++;
                case 2:as++;
                case 3:as++;
                case 4:bs++;
            }
        if(na[al]==1) //小A出石头
        //从这里开始洛谷自己带的题图就没有示例了，需要自己推算。
        //建议反推。
            switch(nb[bl]){
                case 0:as++;
                case 2:bs++;
                case 3:as++;
                case 4:bs++;
            }
        if(na[al]==2) //小A出布
            switch(nb[bl]){
                case 0:bs++;
                case 1:as++;
                case 3:bs++;
                case 4:as++;
            }
        if(na[al]==3) //小A出蜥蜴人
            switch(nb[bl]){
                case 0:bs++;
                case 1:bs++;
                case 2:as++;
                case 4:as++;
            }
        if(na[al]==4) //小A出斯派克
            switch(nb[bl]){
                case 0:as++;
                case 1:as++;
                case 2:bs++;
                case 3:bs++;
            }
        al++;
        bl++;
        if(al>la)
            al=1;
        if(bl>lb)
            bl=1;
        */
    
        //重制版
        //使用二维数组加分
        //看着很乱（
        if(a[na[al]][nb[bl]]==0){
            if(na[al]==nb[bl]){
                al++;bl++;
                if(al>la) al=1;
                if(bl>lb) bl=1;
                continue;
            }
            else bs++;
        }
        else if(a[na[al]][nb[bl]]==1){
            as++;
        }
        al++;bl++;
        if(al>la) al=1;
        if(bl>lb) bl=1;
    }
    cout<<as<<" "<<bs<<endl;
    return 0;
}