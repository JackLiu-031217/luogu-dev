/*--------------------------------------------------------------------------------
  P1308 统计单词数
  一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置，
  有的还能统计出特定单词在文章中出现的次数。
  现在，请你编程实现这一功能，具体要求是：
  给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。
  注意：匹配单词时，不区分大小写，但要求完全匹配，
  即给定单词必须与文章中的某一独立单词在不区分大小写的情况下完全相同，
  如果给定单词仅是文章中某一单词的一部分则不算匹配。
--------------------------------------------------------------------------------*/
//https://www.luogu.com.cn/record/37271277
//感谢@Kio_ (ID:127925)
//感谢@clock钟0622 (ID:323183)
#include<iostream>
#include<cstring>
using namespace std;
string sentence,keyword;
string cutsentence[1000000];
string cutfull[1000000];
int main(){
    getline(cin,keyword); //读入数据
    //cout<<"Keyword="<<keyword<<endl;
    getline(cin,sentence);
    for(int i=0;i<keyword.size();i++){ //谨 防 越 界 操 作 --- @Kio_
        if(keyword[i]>='A'&&keyword[i]<='Z'){
            keyword[i]+=32; //小写转换
        }
    }
    for(int i=0;i<sentence.size();i++){ //下同
        if(sentence[i]>='A'&&sentence[i]<='Z'){
            sentence[i]+=32; //小写转换
        }
    }
    int blkflag=0; //blkflag:空格数量，反推单词数
    for(int i=0;i<sentence.size();i++){
        if(sentence[i]==' '){
            blkflag++; //标记空格数量
        }
    }
    int cutnum=blkflag+1,cutflag=0; //cutnum:单词切片数量 cutflag:切片起始点位置 
    int count=0;    //count:切片序号 --- @clock钟0622
    //for(int i=0;i<cutnum;i++){ // --- @Kio_
        for(int j=cutflag;j<=sentence.size();j++){ //从起始点开始对
            if(sentence[j]==' '||sentence[j]=='\0'){ //划定范围
                for(int k=cutflag;k<j;k++){ //确保在0<k<j范围内复制
                    cutsentence[count]+=sentence[k]; //大数组->小数组 @clock钟0622
                }
                //<<"cutsentence["<<count<<"] = "<<cutsentence[count]<<endl; // Debug --- @clock钟0622
                //cutflag=j; //复制完把起始点调到空格后面的字母
                count++;
                cutflag=j+1; // 要的 --- @clock钟0622
                //cout<<"Begin with point "<<cutflag<<" ."<<endl;
                //break; //退出本轮循环 --- 去掉 @clock钟0622
            }
        }
    //} // --- @clock钟0622
    int sameflag=0,samewordflag=0,firstflagnum=0;
    bool firstflag=false;
    //int lencut; //@Kio_
    for(int i=0;i<cutnum;i++){ //以切片数为界限循环
      //if(cutsentence[i].size()==keyword.size()){
        if(cutsentence[i]==keyword){ // 若完全相同 --- 更改 @clock钟0622
            samewordflag++;
            if(firstflag==false){
                if(i>=1){
                    for(int o=0;o<i;o++){
                        firstflagnum+=cutsentence[o].size();
                    }
                    firstflagnum+=i;
                }else if(i=0){
                    firstflagnum+=1;
                }
                firstflag=true;
            }
        }
    }
    if(samewordflag!=0){ //如果有相同的单词出现
        cout<<samewordflag<<" "<<firstflagnum<<endl; //输出相同个数与初次出现的标识点
    }else if(samewordflag==0){ //如果一个相同的也没有
        cout<<"-1"<<endl; //输出"-1"
    }
    return 0; //结束
}