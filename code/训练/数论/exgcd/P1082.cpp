/*
ax=1(mod b) == ax-by=1(mod b)
exgcd求出一组x y
求最小整数x
因为x0=x+k*b/gcd(a,b)
因为有解为gcd倍数 所以1为gcd值
x0=(x+k*b)mod b就是解 注意负数
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int exgcd(int a,int b,int &x,int &y)
{
	if(!b){
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
	int a,b,x,y;
	cin>>a>>b;
	exgcd(a,b,x,y);
	cout<<(x%b+b)%b<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}