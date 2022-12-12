#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int dp[103][103][103];
int p[N];
int n,kk,d;
void solve()
{
	cin>>n>>kk>>d;
	memset(dp,-1,sizeof dp);
	for(int i=1;i<=n;i++)cin>>p[i];
	for(int i=0;i<=n;i++)dp[i][0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			for(int k=0;k<d;k++){
				if(dp[i-1][j-1][k]==-1)continue;
				dp[i][j][(k+p[i])%d]=max(dp[i][j][(k+p[i])%d],dp[i-1][j-1][k]+p[i]);
				dp[i][j-1][k]=max(dp[i][j-1][k],dp[i-1][j-1][k]);
			}
		}
	}
	cout<<dp[n][kk][0]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}