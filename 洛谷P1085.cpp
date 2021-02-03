//洛谷 P1085 不高兴的菁菁(NOIP2004)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int day,night,zong[7],max,ans,d;
	max=0;
	ans=0;
	for(d=1;d<=7;d++)
	{
		cin>>day>>night;
		zong[d]=day+night;
	}
	for(d=7;d>=1;d--)//逆向法+数组真**好用
	{
		if(zong[d]>max&&zong[d]>8) //判断值是否最大/是否等于8
		{
			zong[d]=max;
			ans=d;
		}
	}
	cout<<ans<<endl;
	return 0;
}