// Problem: P2249 【深基13.例1】查找
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2249
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
int num[1000001];
int n,m;
int search(int target){
    int left=1,right=n;
    while(left<=right){
        int mid=(left+right)/2;
        if(num[mid]>=target){
            right=mid-1;
        }else left=mid+1;
    }
    return num[left]==target?left:-1;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=m;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp>=num[1]&&tmp<=num[n]){
            printf("%d",search(tmp));
        }else printf("-1");
        if(i!=m){
            printf(" ");
        }else printf("\n");
    }
}