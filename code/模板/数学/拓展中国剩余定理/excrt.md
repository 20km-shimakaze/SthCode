# 拓展中国剩余定理

```c++
#include <bits/stdc++.h>
using namespace std;
int exgcd(int a,int b,int &x,int &y)
{
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int d=exgcd(b,a%b,y,x);
	y-=(a/b)*x;
	return d;
}
void excrt(int &a,int &b,int c,int d)
{
	// bt=c-a(mod d)
	if(a==b&&b==-1)return ;
	int x,y;
	int gc=exgcd(b,d,x,y);
	// bx=gc(mod d)
	if((c-a)%gc!=0){
		a=b=-1;
	}
	d/=gc;
	int t=((c-a)/gc)%d*x%d;
	if(t<0)t+=d;
	a=b*t+a;
	b=b*d;
}
signed main()
{
	int a=0,b=1;	// x mod b = a
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int c,d;
		cin>>c>>d;
		excrt(a,b,c,d);
	}
	cout<<a<<endl;
}
```
