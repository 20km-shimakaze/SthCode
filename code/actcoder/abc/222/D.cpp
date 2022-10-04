#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=3005;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int dp[N][N];//在第i位时，填j的方案数
int a[N],b[N];
int n;
int sum[N][N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],a[i]++;
	for(int i=1;i<=n;i++)cin>>b[i],b[i]++;
	for(int i=a[1];i<=b[1];i++)dp[1][i]=1,sum[1][i]=sum[1][i-1]+1;
	for(int i=b[1]+1;i<=3003;i++)sum[1][i]=sum[1][i-1];
	for(int i=2;i<=n;i++){
		for(int j=a[i];j<=b[i];j++){
			dp[i][j]=sum[i-1][j];
		}
		for(int j=1;j<=3003;j++){
			sum[i][j]=(sum[i][j-1]+dp[i][j])%mod;
		}
	}
	cout<<sum[n][3003]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}