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
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int t=a[0];
	for(int x:a)t=__gcd(x,t);
	int ans=INF;
	if(t==1)ans=0;
	if(__gcd(t,n)==1)ans=min(ans,1ll);
	if(__gcd(n-1,t)==1)ans=min(ans,2ll);
	if(__gcd(__gcd(t,n-1),n))ans=min(ans,3ll);
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}