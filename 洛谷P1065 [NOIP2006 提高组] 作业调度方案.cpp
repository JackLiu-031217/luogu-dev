// Problem: P1065 [NOIP2006 提高组] 作业调度方案
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1065
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//https://www.luogu.com.cn/record/100839727

#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;
bool m_proc[21][100001]; //各机器各时间点的使用情况
int main(){
    struct{
        int m_id,ntime; //机器ID、工件加工时间
    }gj[21][21];
    memset(gj,0,sizeof(gj));
    int m,n; //机器数、工件数
    cin>>m>>n;
    int srt[401]; //操作顺序
    for(int i=1;i<=m*n;i++){
        cin>>srt[i];
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=m;o++){
            cin>>gj[i][o].m_id;
        }
    }
    for(int i=1;i<=n;i++){
        for(int o=1;o<=m;o++){
            cin>>gj[i][o].ntime;
        }
    }
    int lptime[21],ans=0,n_step[21]; //各零部件最后处理时间, 答案输出
    memset(lptime,0,sizeof(lptime));
    memset(n_step,0,sizeof(n_step));
    for(int i=1;i<=m*n;i++){
    	int num=srt[i];
        n_step[num]++;
        int m_spare=0;
        int m_id=gj[num][n_step[num]].m_id;
        for(int o=lptime[num]+1;;o++){
            if(m_proc[m_id][o]==0){
                m_spare++;
            }else{
                m_spare=0;
            }
            if(m_spare==gj[num][n_step[num]].ntime){
                for(int p=o-m_spare+1;p<=o;p++){
                    m_proc[m_id][p]=1;
                }
                if(o>ans){
                    ans=o;
                }
                lptime[num]=o;
                break;
            }
        }
    }
    
    printf("%d\n",ans);
    return 0;
}