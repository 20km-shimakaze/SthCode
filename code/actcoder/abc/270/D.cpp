#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e4+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,k,a[N];
int dp[N];//在第i个石头时，能获得的最大的石子数
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(i<a[j])continue;
			dp[i]=max(dp[i],i-dp[i-a[j]]);
		}
	}
	cout<<dp[n]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}