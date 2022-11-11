#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
int mod=998244353;
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
void solve()
{
	int x1,y1,m,n,l;
	cin>>x1>>y1>>m>>n>>l;
	int s=x1-y1,w=n-m;
	if(w<0){
		s=-s;
		w=-w;
	}
	int x,y;
	exgcd(w,l,x,y);
	if(s%__gcd(w,l)!=0){
		cout<<"Impossible"<<endl;
		return;
	}
	int gc=__gcd(w,l);
	int t=l/gc;
	cout<<((x*(s/gc)%t)+t)%t<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}