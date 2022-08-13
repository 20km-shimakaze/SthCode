#include <bits/stdc++.h>
using namespace std;

struct CP{
	double x , y;
	CP( double _x = 0, double _y = 0. ){
		x = _x;
		y = _y;
	}
	CP operator +(const CP &b) {
		return CP( x + b.x , y + b.y );
	}
	CP operator -(const CP &b) {
		return CP( x - b.x , y - b.y );
	}
	CP operator *(const CP &b) {
		return CP( x * b.x - y * b.y , x * b.y + y * b.x );
	}
};
const int maxn = 2e6+7;//n+m
const double PI = acos(-1);
int tr[maxn<<1];
CP f[maxn<<1],p[maxn<<1];
int n,m;
void FFT(CP *f,int flag)
{
	for(int i=0;i<n;i++){
		if(i<tr[i])swap(f[i],f[tr[i]]);
	}
	for(int p=2;p<=n;p<<=1){
		int len=p>>1;
		CP cp(cos(PI*2/p),sin(PI*2/p));
		cp.y*=flag;
		for(int k=0;k<n;k+=p){
			CP buf(1,0);
			for(int l=k;l<k+len;l++){
				CP t=buf*f[len+l];
				f[len+l]=f[l]-t;//F(W^{k+n/2})=FL(w^k)-W^k*FR(w^k)
				f[l]=f[l]+t;	//F(W^k)=FL(w^k)+W^k*FR(w^k)
				buf=buf*cp;
			}
		}
	}
}
signed main()
{
	cin>>n>>m;
	for(int i=0;i<=n;i++)scanf("%lf",&f[i].x);
	for(int i=0;i<=m;i++)scanf("%lf",&p[i].x);
	for(m+=n,n=1;n<=m;n<<=1);
	for(int i=0;i<n;i++){
		tr[i]=(tr[i>>1]>>1)|((i&1)?n>>1:0);
	}
	FFT(f,1);
	FFT(p,1);
	for(int i=0;i<n;i++)f[i]=f[i]*p[i];
	FFT(f,-1);
	puts("");
	for(int i=0;i<=m;i++)printf("%d ",(int)(f[i].x/n+0.5));
}