#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
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
int su[N];
int ispri[N];
void pri()
{
	for(int i=2;i<=1e6;i++){
		if(ispri[i])continue;
		for(int j=2;j*i<=1e6;j++){
			ispri[i*j]=1;
		}
	}
}
void solve()
{
	int n,m;
	cin>>n>>m;
	int ans=0;
	su[0]=1;
	pri();
	int del=1,tot=1,cmp=1;
	for(int i=1;i<=n;i++){
		if(!ispri[i])cmp=(cmp*i);
		tot=tot*(m%mod)%mod;
		ans=(ans+tot)%mod;
		del=(del*((m/cmp)%mod))%mod;
		// cout<<del<<endl;
		ans=(ans-del)%mod;
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