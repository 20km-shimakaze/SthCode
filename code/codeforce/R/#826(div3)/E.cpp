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
int n,a[N],dp[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],dp[i]=0;
	dp[0]=1;dp[n+1]=0;
	for(int i=1;i<=n;i++){
		if(dp[i-1]&&i+a[i]<=n)dp[i+a[i]]=1;
		if(i-a[i]-1>=0&&dp[i-a[i]-1])dp[i]=1;
	}
	cout<<(dp[n]?"YES":"NO")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}