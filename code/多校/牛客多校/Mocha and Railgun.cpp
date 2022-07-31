/*
https://ac.nowcoder.com/acm/contest/33186/D
观察可以发现能形成弧长最长的边就是基准点与圆心之间的连线，平行或垂直发射光波所攻击到的
求夹角两边的角度，根据三角函数计算即可
*/
#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1);
double r,x,y,d;
double f()
{
	double len=sqrt(x*x+y*y);
	double sum;
	if(len<=d){
		sum=(pi-acos(1.0*(d-len)/r)-acos(1.0*(d+len)/r))*r;
	}
	else{
		sum=(acos(1.0*(len-d)/r)-acos(1.0*(len+d)/r))*r;
	}
	return 1.0*sum;
}
void solve()
{
	
	scanf("%lf%lf%lf%lf",&r,&x,&y,&d);
	double sum_1=1.0*(pi-2*acos(1.0*d/r))*r;
	double sum_2=f();
	printf("%.6lf\n",max(sum_1,sum_2));
}
int main()
{
	int __;cin>>__;
	while(__--)
		solve();
	return 0;
}