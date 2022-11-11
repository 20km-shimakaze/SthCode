#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
inline void write(int x)
{
	 if(x<0) putchar('-'),x=-x;
	 if(x>9) write(x/10);
	 putchar(x%10+'0');
}
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
		cout<<"T_T"<<endl;
		a=b=-1;
		return;
	}
	d/=gc;
	int t=((c-a)/gc)%d*x%d;
	if(t<0)t+=d;
	a=b*t+a;
	b=b*d;
}
void solve()
{
	int a=0,b=1;	// x mod b = a
	int n=read();
	// cin>>n;
	for(int i=1;i<=n;i++){
		int c,d;
		// cin>>c>>d;
		d=read();
		c=read();
		excrt(a,b,c,d);
	}
	// cout<<a<<endl;
	write(a);
}
signed main()
{
	//IOS
	// freopen("C:\\Users\\28013\\Desktop\\P4777_15.in","r",stdin);
 	// freopen("C:\\Users\\28013\\Desktop\\out.out","w",stdout);
	int __=1;
	// cin >> __;
	// __=read();
	while (__--)
		solve();
	// fclose(stdin);
	// fclose(stdout);
}