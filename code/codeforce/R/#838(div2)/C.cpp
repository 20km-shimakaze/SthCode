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
int dp[N];
void solve()
{
	int ans=0;
	string s;
	int n;
	cin>>n>>s;
	ans=1;
	int t=1;
	for(int i=1;i<n;i++){
		if(s[i]!=s[i-1]){
			t=1;
		}
		else t=t*2%mod;
		ans=(ans+t)%mod;
	}
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