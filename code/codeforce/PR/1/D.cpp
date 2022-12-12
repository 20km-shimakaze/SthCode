#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
int fac[N];
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
int inv(int x)
{
	return qpow(x,mod-2);
}
void init(int n)
{
	fac[0]=1;
	for(int i=1;i<=n;i++){
		fac[i]=(fac[i-1]*i)%mod;
	}
}
int C(int n,int m)
{
    if(m>n)return 0;
    return fac[n]*inv(fac[m])%mod*inv(fac[n-m])%mod;
}
void solve()
{
	int n,k;
	cin>>n>>k;
	if(!k){
		cout<<qpow(3,n)<<endl;
		return;
	}
	init(n);
	int ans=0;
	for(int i=1;i<=k;i++){
		// if(i*2<=n)ans=(ans+qpow(3,n-i*2)*C(k-1,i-1)%mod*(C(n-k-1,i-1)+C(n-k-1,i))%mod)%mod;
		// if(i*2-1<=n)ans=(ans+qpow(3,n-i*2+1)*C(k-1,i-1)%mod*(C(n-k-1,i-2)+C(n-k-1,i-1))%mod)%mod;
		if(i*2<=n)ans=(ans+qpow(3,n-i*2)*C(k-1,i-1)%mod*(C(n-k,i))%mod)%mod;
		if(i*2-1<=n)ans=(ans+qpow(3,n-i*2+1)*C(k-1,i-1)%mod*(C(n-k,i-1))%mod)%mod;
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