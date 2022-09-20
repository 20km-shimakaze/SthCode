#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int f(int a,int b,int c)
{
	return a*100+b*10+c;
}
void solve()
{
	int x;
	cin>>x;
	int a,b,c;
	a=x/100,b=(x/10)%10,c=x%10;
	cout<<f(a,b,c)+f(b,c,a)+f(c,a,b)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}