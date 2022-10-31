#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,k;
int dp[1003][1003];
int qpow(ll a,ll n)
{
	if(a%mod==0)return 0;
	ll ans=1;
	while(n){
		if(n&1){
			ans=ans*a%mod;
		}
		n>>=1;
		a=a*a%mod;
	}
	ans%=mod;
	return ans;
}
void solve()
{
	cin>>n>>m>>k;
	int ti=qpow(m,mod-2);
	memset(dp,-1,sizeof(dp));
	int ans=0;
	dp[0][0]=1;
	for(int i=0;i<k;i++){
		dp[i+1][n]=dp[i][n];
		for(int j=0;j<n;j++){
			for(int k=1;k<=m;k++){
				if(dp[i][j]==-1)continue;
				int t=(dp[i][j]*ti)%mod;
				int dis;
				if(k>n-j)dis=n-(k-(n-j));
				else dis=j+k;
				if(dp[i+1][dis]==-1)dp[i+1][dis]=t;
				else dp[i+1][dis]=(dp[i+1][dis]+t)%mod;
			}
		}
	}
	if(dp[k][n]==-1)cout<<0<<endl;
	else cout<<dp[k][n]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}