//P1177 【模板】快速排序
//https://www.luogu.com.cn/problem/P1177

//https://www.luogu.com.cn/record/83564299 RE*4 不幸地把数组大小看错了
//https://www.luogu.com.cn/record/83564342 AC

#include<iostream>
using namespace std;
int n,a[100001];
void swap(int x,int y){
    int tmp=a[x];
    a[x]=a[y];
    a[y]=tmp;
}
void quicksort(int h,int e){
    int j=a[(e+h)/2],x=h,y=e; //中位数、头、尾
    while(x<=y){
        while(a[x]<j) x++;
        while(a[y]>j) y--;
        if(x<=y){ //左右正常顺序排好后找不符合左右大小规律的数互换位置
            swap(x,y);
            x++;y--; //继续正常查找排序过程
        }
    }
    //此处循环结束后，左右部分分割
    if(h<y) //左半部分排序
        quicksort(h,y);
    if(x<e) //右半部分排序
        quicksort(x,e);
    return;
}
int main(){
    /*
    快速排序是C.R.A.Hoare于1962年提出的一种划分交换排序。
    它采用了一种分治的策略，通常称其为分治法(Divide-and-ConquerMethod)。
    该方法的基本思想是：
    1．先从数列中取出一个数作为基准数。
    2．分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边。
    3．再对左右区间重复第二步，直到各区间只有一个数。  
    虽然快速排序称为分治法，但分治法这三个字显然无法很好的概括快速排序的全部步骤。因此我的对快速排序作了进一步的说明：挖坑填数+分治法。
    (https://www.runoob.com/w3cnote/quick-sort.html)
    */
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    quicksort(1,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}