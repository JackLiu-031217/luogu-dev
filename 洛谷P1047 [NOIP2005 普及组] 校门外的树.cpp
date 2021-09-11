#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    int l,subnum,subhead,subtail,treelocate,treeflag[10001],treenonflag=0;
    /*
    subnum:地铁站数量,subhead:占用区域头,subtail:占用区域尾,treelocate:树位置,treeflag[]:标记是否被占用,treenonflag:未被占用的树木的数目
    */
    cin>>l>>subnum;
    for(treelocate=0;treelocate<=l;treelocate++){
        treeflag[treelocate]=0;//初始化
        //cout<<"Debuging:l="<<l<<",locate="<<treelocate<<",treeflag="<<treeflag[treelocate]<<endl;
    }
    for(int i=1;i<=subnum;i++){//请注意，可以i=1,i<subnum，也可以i=0,i<subnum-1（一句废话）
        cin>>subhead>>subtail;
        //cout<<"Debuging:head="<<subhead<<",end="<<subtail<<endl;
        for(treelocate=subhead;treelocate<=subtail;treelocate++){
            if(treeflag[treelocate]==0){
                treeflag[treelocate]=1;//符合条件，进行标记
            }
            //cout<<"locate="<<treelocate<<",flag="<<treeflag[treelocate]<<endl;
        }
    }
    for(treelocate=0;treelocate<=l;treelocate++){
        if(treeflag[treelocate]==0){
            treenonflag+=1;//找到没被标记的个数
            //cout<<"Debuging:treenonflag="<<treenonflag<<endl;
        }
    }
    cout<<treenonflag<<endl;//输出
    //如果不会用gdb,cout式debug是你不二的选择（
    return 0;
}