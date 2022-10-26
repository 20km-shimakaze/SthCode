#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int an[N];
int n,k;
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
	cin>>n>>k;
	for(int i=1;i<=n;i++)an[i]=k;
	for(int i=1;i<=k;i++){
		char c;
		int t;
		cin>>c>>t;
		if(c=='L'){
			an[t]=1;
			for(int j=1;j<t;j++)an[j]=max(1ll,an[j]-1);
		}
		else{
			an[t]=1;
			for(int j=t+1;j<=n;j++)an[j]=max(1ll,an[j]-1);
		}
	}
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=(ans*an[i])%mod;
	}
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