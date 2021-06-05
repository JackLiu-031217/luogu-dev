//P1067 [NOIP2009 普及组] 多项式输出
//https://www.luogu.com.cn/problem/P1067

/*一元$n$次多项式可用如下的表达式表示：
  ![](https://cdn.luogu.com.cn/upload/pic/26.png)
  $$f(x)=a_nx^n+a_{n-1}x^{n-1}+\cdots +a_1x+a_0,a_n\ne 0$$
  其中，$a_ix^i$称为$i$次项，$a_i$ 称为$i$次项的系数。给出一个一元多项式各项的次数和系数，请按照如下规定的格式要求输出该多项式：
  1. 多项式中自变量为$ x$，从左到右按照次数递减顺序给出多项式。
  2. 多项式中只包含系数不为$0$的项。
  3. 如果多项式$n$次项系数为正，则多项式开头不出现“+”号，如果多项式$n$次项系数为负，则多项式以“-”号开头。
  4.对于不是最高次的项，以“+”号或者“-”号连接此项与前一项，分别表示此项系数为正或者系数为负。
  紧跟一个正整数，表示此项系数的绝对值（如果一个高于$0$次的项，其系数的绝对值为$1$，则无需输出 $1$）。
  如果$x$的指数大于$1$，则接下来紧跟的指数部分的形式为“$x^b$”，其中 $b $为 $x $的指数；
  如果 $x$的指数为$ 1$，则接下来紧跟的指数部分形式为“$x$”；
  如果 $x$ 的指数为$ 0$，则仅需输出系数即可。
  5.多项式中，多项式的开头、结尾不含多余的空格。
*/

//https://www.luogu.com.cn/record/49472475
//https://www.luogu.com.cn/record/49472703
//https://www.luogu.com.cn/record/49478920
//https://www.luogu.com.cn/record/49479138
//https://www.luogu.com.cn/record/49523093

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=0;i--){
		string num;
		bool jian=0;
		bool o=0;
		cin>>num;
		if(num=="0"){
			continue;
		}
		if(num=="1"){
			o=1;
			num="x";
		}
		if(num[0]=='-'){
			jian=1;
			if(num=="-1"){
				o=1;
				num="-x";
			}
		}
		if(i==n){
			if(o){
				cout<<num<<"^"<<i;
			}else cout<<num<<"x^"<<i;
		}else if(i==1){
			if(jian==0){
				cout<<"+";
			}
			if(o){
				cout<<"x";
			}else cout<<num<<"x";
		}else if(i==0){
			if(jian==0&&o){
				cout<<"+1";
			}else if(jian&&o){
				cout<<"-1";
			}else if(jian==0){
				cout<<"+"<<num;
			}else cout<<num;
		}else{
			if(jian==0){
				cout<<"+";
			}
			if(o){
				cout<<num<<"^"<<i;
			}else cout<<num<<"x^"<<i;
		}
	}
	cout<<endl;
	return 0;
}