//P1540 [NOIP2010 提高组] 机器翻译
//https://www.luogu.com.cn/problem/P1540

//小晨的电脑上安装了一个机器翻译软件，他经常用这个软件来翻译英语文章。
//这个翻译软件的原理很简单，它只是从头到尾，依次将每个英文单词用对应的中文含义来替换。
//对于每个英文单词，软件会先在内存中查找这个单词的中文含义，如果内存中有，软件就会用它进行翻译；
//如果内存中没有，软件就会在外存中的词典内查找，查出单词的中文含义然后翻译，并将这个单词和译义放入内存，以备后续的查找和翻译。
//假设内存中有 M 个单元，每单元能存放一个单词和译义。每当软件将一个新单词存入内存前，如果当前内存中已存入的单词数不超过 M-1，软件会将新单词存入一个未使用的内存单元；
//若内存中已存入 M 个单词，软件会清空最早进入内存的那个单词，腾出单元来，存放新单词。
//假设一篇英语文章的长度为 N 个单词。给定这篇待译文章，翻译软件需要去外存查找多少次词典？假设在翻译开始前，内存中没有任何单词。

//https://www.luogu.com.cn/record/50892096
//https://www.luogu.com.cn/record/51423798
//https://www.luogu.com.cn/record/51531867
//https://www.luogu.com.cn/record/51531868
//https://www.luogu.com.cn/record/51531869

#include<iostream>
using namespace std;
int main(){
	int m,n,ans=0;
	int l=0;
	int w[1001];
    for(int i=0;i<=1001;i++){
        w[i]=-1;
    }
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		int in;
		cin>>in;
		bool h=0;
		for(int o=0;o<=m;o++){
			if(in==w[o]){
				h=1;
			}	
		}
		if(h==0){
			if(l==m-1){ //内存范围：0-“m-1”
				for(int o=0;o<m;o++){
					w[o]=w[o+1];
				}
				w[m-1]=in;
			}else{
				w[l]=in;
				l++;
			}
			ans++;
		}	
	}
	cout<<ans<<endl;
	return 0;
}