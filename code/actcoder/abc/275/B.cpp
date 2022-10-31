#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<(((a%mod)*(b%mod)%mod*(c%mod)%mod)-((d%mod)*(e%mod)%mod*(f%mod)%mod)+mod)%mod<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}