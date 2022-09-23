/*
计数dp，dp定义为到第i位有k位的数
可以发现想要连续增加那么下一个ai一定是比前一位大一位
这样只要便利每一位去，尝试把每一个的情况都dp出来
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
int dp[63][63];//第i位有k位的数
void solve()
{
	cin>>n>>m;
	if(n>60){
		cout<<0<<endl;
		return;
	}
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=59;j++){//前一位有可能的位数
			for(int k=j+1;k<=60;k++){//现在这一位可以的位数
				int maxx=(1ll<<k)-1;
				int minn=(1ll<<(k-1));
				maxx=min(maxx,m);
				int num=max(maxx-minn+1,0ll)%mod;
				dp[i][k]+=dp[i-1][j]*num;
				dp[i][k]%=mod;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=60;i++)ans+=dp[n][i],ans%=mod;
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