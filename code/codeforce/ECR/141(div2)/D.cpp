#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int hx=90000;
int dp[302][180004];
int a[304];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	dp[2][hx+a[2]]=1;
	int ans=0;
	for(int i=2;i<n;i++){
		for(int j=0;j<=hx+hx;j++){
			if(!dp[i][j])continue;
			if(j!=hx){
				dp[i+1][a[i+1]+j]+=dp[i][j];
				dp[i+1][a[i+1]-j+hx*2]+=dp[i][j];
			}
			else dp[i+1][a[i+1]+j]+=dp[i][j];
		}
		for(int j=0;j<=hx+hx;j++)dp[i+1][j]%=mod;
	}
	for(int i=0;i<=hx+hx;i++)ans=(ans+dp[n][i])%mod;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}