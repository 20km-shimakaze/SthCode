#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int dp[100005][10];
int n;
int a[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][a[1]]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(!dp[i-1][j])continue;
			dp[i][(j+a[i])%10]=(dp[i][(j+a[i])%10]+dp[i-1][j])%mod;
			dp[i][(j*a[i])%10]=(dp[i][(j*a[i])%10]+dp[i-1][j])%mod;
		}
	}
	for(int i=0;i<=9;i++){
		cout<<dp[n][i]<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}