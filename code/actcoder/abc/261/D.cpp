#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,m;
int a[1000006],dp[5005][5005];//在第i次j连胜
map<int,int>mp;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int x,y;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		mp[x]=y;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(i>=1)dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]+mp[j]);//ying
			dp[i][0]=max(dp[i][0],dp[i-1][j]);//shu
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)ans=max(ans,dp[n][i]);
	cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}